#include <stdio.h>

void main() {
    int i, j, num = 1;

    // Loop for each row
    for(i = 1; i <= 5; i++) {
        // Loop for each column in the row
        for(j = 1; j <= i; j++) {
            printf("%d ", num);  // Print the current number
            num++;  // Increment the number
        }
        printf("\n");  // Move to the next line after each row
    }
}
