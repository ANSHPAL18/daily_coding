#include <stdio.h>
#include <stdlib.h> // Required for rand and srand functions
#include <time.h>   // Required for time function

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses=0;
    int guessed_number;
    do{
        printf("guess the number");
        scanf("%d",&guessed_number);
        if(guessed_number>randomNumber){
            printf("please lower number!\n");
        }else if(guessed_number<randomNumber){
            printf("please higher number!\n");
        }
        else{
            printf("congrats!!\n");
        }
        
    no_of_guesses++;
    }
    while (guessed_number!=randomNumber);
    
    
    // Print the generated random number
    printf("you guessed the number in %d guesses",no_of_guesses);

    return 0;
}
