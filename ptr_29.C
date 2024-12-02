#include <stdio.h>

void main() {
    int i, j, spaces;

    // Loop for each row (height of the pyramid)
    for(i = 1; i <= 5; i++) {
        // Loop for spaces before the '*' and 'A'
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");  // Print spaces for alignment
        }

        // Loop to print '*' and 'A' in alternating pattern
        for(j = 1; j <= i; j++) {
            if(j % 2 != 0) {
                printf("*");  // Print '*' at odd positions
            } else {
                printf("A");  // Print 'A' at even positions
            }
        }

        printf("\n");  // Move to the next line after each row
    }
}
