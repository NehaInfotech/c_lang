#include <stdio.h>

void main() {
    int i, j, spaces;

    // Loop for rows
    for(i = 5; i >= 1; i--) {
        // Loop for spaces before the numbers
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");  // Print spaces before the numbers
        }

        // Loop to print numbers in descending order from 5 to i
        for(j = 5; j >= 6 - i; j--) {
            printf("%d", j);  // Print numbers from 5 down to i
        }

        printf("\n");  // Move to the next line after each row
    }
}
