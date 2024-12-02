#include <stdio.h>

void main() {
    int i, j, spaces;

    // Loop for rows
    for(i = 1; i <= 5; i++) {
        // Loop for spaces before the numbers
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");  // Print spaces before the numbers
        }

        // Loop to print numbers, the number printed is the same as the row number
        for(j = 1; j <= i; j++) {
            printf("%d", i);  // Print the current row number i
        }

        printf("\n");  // Move to the next line after each row
    }
}
