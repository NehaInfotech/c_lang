#include <stdio.h>

void main() {
    int i, j;

    // Loop for rows
    for(i = 5; i >= 1; i--) {
        // Loop for columns (printing the same number for each row)
        for(j = 1; j <= i; j++) {
            printf("%d", i);  // Print the value of i, repeated i times
        }
        printf("\n");  // Move to the next line after each row
    }
}
