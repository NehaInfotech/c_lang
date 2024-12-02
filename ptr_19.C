#include <stdio.h>

void main() {
    int i, j, spaces;

    // Loop for rows
    for(i = 1; i <= 5; i++) {
        // Loop for spaces before the stars
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");  // Print spaces before the stars
        }

        // Loop to print stars
        for(j = 1; j <= i; j++) {
            printf("*");  // Print stars
        }

        printf("\n");  // Move to the next line after each row
    }
}
