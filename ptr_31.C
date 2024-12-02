#include <stdio.h>

void main() {
    char word[] = "CREATIVE";  // The word to be printed
    int i, j, spaces;

    // Loop for each row
    for(i = 1; i <= 8; i++) {
        // Loop to print spaces before the characters
        for(spaces = 1; spaces <= 8 - i; spaces++) {
            printf(" ");  // Print spaces for alignment
        }

        // Loop to print the characters in the row
        for(j = 0; j < i; j++) {
            printf("%c ", word[j]);  // Print characters from the word with space
        }

        printf("\n");  // Move to the next line after each row
    }
}
