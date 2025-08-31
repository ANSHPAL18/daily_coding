#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int words = 0, lines = 1;
    int in_word = 0;

    // Open the file in read mode
    file = fopen("p.txt", "r");
    if (file == NULL) {
        printf("File not found or unable to open.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        // Count lines
        if (ch == '\n')
            lines++;

        // Count words
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (in_word) {
                words++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }

    // If the last character ends a word
    if (in_word)
        words++;

    // Close the file
    fclose(file);

    // Display the results
    printf("Number of lines: %d\n", lines);
    printf("Number of words: %d\n", words);

    return 0;
}
