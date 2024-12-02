#include <stdio.h>

void main() {
    int i, j, spaces;

    // Print the first part of the pattern
    for(i = 1; i <= 5; i++) {
        // Loop for spaces before the numbers
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");  // Print spaces before the numbers
        }

        // Loop to print numbers from 1 to i
        for(j = 1; j <= i; j++) {
            printf("%d", j);  // Print numbers from 1 to i
        }

        printf("\n");  // Move to the next line after each row
    }

    // Print the second part of the pattern
    for(i = 2; i <= 5; i++) {
        // Loop for spaces before the numbers
        for(spaces = 1; spaces <= i - 1; spaces++) {
            printf(" ");  // Print spaces before the numbers
        }

        // Loop to print numbers from i to 5
        for(j = i; j <= 5; j++) {
            printf("%d", j);  // Print numbers from i to 5
        }

        printf("\n");  // Move to the next line after each row
    }
}
