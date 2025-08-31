#include <stdio.h>
#include <string.h>

// Structure for TIME
typedef struct {
    int hour;
    int minute;
} TIME;

// Structure for TRAIN_INFO
typedef struct {
    int train_no;
    char train_name[50];
    TIME departure_time;
    TIME arrival_time;
    char start_station[50];
    char end_station[50];
} TRAIN_INFO;

int main() {
    TRAIN_INFO trains[100];
    int n, i, j;

    // Input number of trains
    printf("Enter the number of trains: ");
    scanf("%d", &n);

    // Input train details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for train %d\n", i + 1);
        printf("Train number: ");
        scanf("%d", &trains[i].train_no);
        printf("Train name: ");
        scanf(" %[^\n]", trains[i].train_name);
        printf("Departure time (hour minute): ");
        scanf("%d %d", &trains[i].departure_time.hour, &trains[i].departure_time.minute);
        printf("Arrival time (hour minute): ");
        scanf("%d %d", &trains[i].arrival_time.hour, &trains[i].arrival_time.minute);
        printf("Start station: ");
        scanf(" %[^\n]", trains[i].start_station);
        printf("End station: ");
        scanf(" %[^\n]", trains[i].end_station);
    }

    // Sort trains by train number
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (trains[j].train_no > trains[j + 1].train_no) {
                TRAIN_INFO temp = trains[j];
                trains[j] = trains[j + 1];
                trains[j + 1] = temp;
            }
        }
    }


    // (i) List all trains that depart from a particular station
    char station[50];
    printf("\nEnter the station to list trains departing from: ");
    scanf(" %[^\n]", station);

    printf("\nTrains departing from %s:\n", station);
    for (i = 0; i < n; i++) {
        if (strcmp(trains[i].start_station, station) == 0) {
            printf("Train No: %d, Train Name: %s, Departure: %02d:%02d\n", 
                   trains[i].train_no, trains[i].train_name, 
                   trains[i].departure_time.hour, trains[i].departure_time.minute);
        }
    }

    // (ii) List all trains departing from a station at a specific time
    TIME specific_time;
    printf("\nEnter the station and time (hour minute) to list trains: ");
    scanf(" %[^\n]%d %d", station, &specific_time.hour, &specific_time.minute);

    printf("\nTrains departing from %s at %02d:%02d:\n", station, specific_time.hour, specific_time.minute);
    for (i = 0; i < n; i++) {
        if (strcmp(trains[i].start_station, station) == 0 && 
            trains[i].departure_time.hour == specific_time.hour && 
            trains[i].departure_time.minute == specific_time.minute) {
            printf("Train No: %d, Train Name: %s\n", trains[i].train_no, trains[i].train_name);
        }
    }

    // (iii) List trains departing within the next 1 hour
    printf("\nEnter the station and current time (hour minute) to list trains departing within the next hour: ");
    scanf(" %[^\n]%d %d", station, &specific_time.hour, &specific_time.minute);

    printf("\nTrains departing from %s within the next hour:\n", station);
    for (i = 0; i < n; i++) {
        if (strcmp(trains[i].start_station, station) == 0) {
            int current_time_in_minutes = specific_time.hour * 60 + specific_time.minute;
            int departure_time_in_minutes = trains[i].departure_time.hour * 60 + trains[i].departure_time.minute;

            if (departure_time_in_minutes > current_time_in_minutes && 
                departure_time_in_minutes <= current_time_in_minutes + 60) {
                printf("Train No: %d, Train Name: %s, Departure: %02d:%02d\n", 
                       trains[i].train_no, trains[i].train_name, 
                       trains[i].departure_time.hour, trains[i].departure_time.minute);
            }
        }
    }

    // (iv) List trains between a start and end station
    char end_station[50];
    printf("\nEnter the start and end stations to list trains: ");
    scanf(" %[^\n] %[^\n]", station, end_station);

    printf("\nTrains between %s and %s:\n", station, end_station);
    for (i = 0; i < n; i++) {
        if (strcmp(trains[i].start_station, station) == 0 && 
            strcmp(trains[i].end_station, end_station) == 0) {
            printf("Train No: %d, Train Name: %s, Departure: %02d:%02d, Arrival: %02d:%02d\n", 
                   trains[i].train_no, trains[i].train_name, 
                   trains[i].departure_time.hour, trains[i].departure_time.minute, 
                   trains[i].arrival_time.hour, trains[i].arrival_time.minute);
        }
    }

    return 0;
}
