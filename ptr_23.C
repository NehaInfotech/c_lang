#include <stdio.h>

void main() {
    int i, j, spaces;

    // Loop for rows
    for(i = 1; i <= 5; i++) {
        // Loop for numbers in the first part (left side)
        for(j = 1; j <= i; j++) {
            printf("%d", j);  // Print numbers from 1 to i
        }

        // Loop for spaces between the left and right numbers
        for(spaces = 1; spaces <= 10 - 2 * i; spaces++) {
            printf(" ");  // Print spaces in between
        }

        // Loop for numbers in the second part (right side)
        for(j = i; j >= 1; j--) {
            printf("%d", j);  // Print numbers from i down to 1
        }

        printf("\n");  // Move to the next line after each row
    }
}
