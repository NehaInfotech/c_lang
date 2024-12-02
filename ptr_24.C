#include <stdio.h>

void main() {
    int i, j, spaces;

    // Loop for the upper half of the pattern
    for(i = 5; i >= 1; i--) {
        // Loop to print the left part of numbers
        for(j = 1; j <= i; j++) {
            printf("%d", j);  // Print numbers from 1 to i
        }

        // Loop to print spaces between the two parts
        for(spaces = 1; spaces <= 2 * (5 - i); spaces++) {
            printf(" ");  // Print spaces
        }

        // Loop to print the right part of numbers
        for(j = i; j >= 1; j--) {
            printf("%d", j);  // Print numbers from i down to 1
        }

        printf("\n");  // Move to the next line after each row
    }

    // Loop for the lower half of the pattern (same as upper half but reversed)
    for(i = 2; i <= 5; i++) {
        // Loop to print the left part of numbers
        for(j = 1; j <= i; j++) {
            printf("%d", j);  // Print numbers from 1 to i
        }

        // Loop to print spaces between the two parts
        for(spaces = 1; spaces <= 2 * (5 - i); spaces++) {
            printf(" ");  // Print spaces
        }

        // Loop to print the right part of numbers
        for(j = i; j >= 1; j--) {
            printf("%d", j);  // Print numbers from i down to 1
        }

        printf("\n");  // Move to the next line after each row
    }
}
