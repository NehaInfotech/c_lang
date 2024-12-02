#include <stdio.h>

void main() {
    int i, j, spaces;

    // Loop for rows
    for(i = 5; i >= 1; i--) {
        // Loop for spaces before the numbers
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");  // Print spaces before the numbers
        }
        
        // Loop to print numbers from i to 5
        for(j = i; j <= 5; j++) {
            printf("%d", j);  // Print numbers from i to 5
        }

        printf("\n");  // Move to the next line after each row
    }
}
