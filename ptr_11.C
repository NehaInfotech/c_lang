#include <stdio.h>

void main() {
    int i, j, spaces;

    for(i = 1; i <= 5; i++) {
        // Loop to print spaces before the numbers
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf("  ");  // Print two spaces for alignment
        }
        // Loop to print numbers in each row
        for(j = 1; j <= i; j++) {
            printf("%d ", j);  // Print numbers followed by a space
        }
        printf("\n");  // Move to the next line after each row
    }
}
