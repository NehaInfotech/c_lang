#include <stdio.h>

void main() {
    int i, j;

    // Loop for rows
    for(i = 5; i >= 1; i--) {
        // Loop for columns
        for(j = 5; j >= i; j--) {
            printf("%d", j);  // Print numbers from 5 down to i
        }
        printf("\n");  // Move to the next line after each row
    }
}
