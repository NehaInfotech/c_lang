#include <stdio.h>

void main() {
    int i, j, spaces;

    // Loop for rows
    for(i = 5; i >= 1; i--) {
        // Loop for spaces before the numbers
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");  // Print spaces before the numbers
        }

        // Loop to print numbers in descending order from i to 1
        for(j = i; j >= 1; j--) {
            printf("%d", j);  // Print numbers from i down to 1
        }

        printf("\n");  // Move to the next line after each row
    }
}
