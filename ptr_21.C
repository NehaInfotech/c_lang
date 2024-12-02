#include <stdio.h>

void main() {
    int i, j;

    // Print the first half of the pattern
    for(i = 1; i <= 5; i++) {
        // Print numbers in decreasing order from i to 1
        for(j = i; j >= 1; j--) {
            printf("%d", j);  // Print numbers from i to 1
        }
        printf("\n");  // Move to the next line after each row
    }

    // Print the second half of the pattern
    for(i = 4; i >= 1; i--) {
        // Print numbers in decreasing order from i to 1
        for(j = i; j >= 1; j--) {
            printf("%d", j);  // Print numbers from i to 1
        }
        printf("\n");  // Move to the next line after each row
    }
}
