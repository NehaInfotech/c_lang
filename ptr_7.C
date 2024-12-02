#include <stdio.h>

void main() {
    int i, j;

    // Loop for rows
    for(i = 5; i >= 1; i--) {
        // Loop for columns
        for(j = i; j >= 1; j--) {
            printf("%d", j);  // Print numbers starting from i down to 1
        }
        printf("\n");  // Move to the next line after each row
    }
}
