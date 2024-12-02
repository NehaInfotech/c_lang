#include <stdio.h>

void main() {
    int i, j;

    // Loop for each row
    for(i = 1; i <= 5; i++) {
        // Loop for each column in the row
        for(j = 1; j <= i; j++) {
            // Print 1 if the column number is odd, 0 if even
            if(j % 2 != 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");  // Move to the next line after each row
    }
}
