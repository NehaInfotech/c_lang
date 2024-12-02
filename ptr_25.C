#include <stdio.h>

void main() {
    int i, j, num;

    // Loop for each row
    for(i = 1; i <= 5; i++) {
        num = 1;  // Start with 1 for each row

        // Loop for each column in the row
        for(j = 1; j <= i; j++) {
            printf("%d", num);  // Print the current number
            num = num * (i - j) / j;  // Calculate the next number in the pattern using binomial coefficient logic
        }

        printf("\n");  // Move to the next line after each row
    }
}
