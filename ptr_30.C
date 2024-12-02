#include <stdio.h>

void main() {
    int i, j, spaces;

    // Upper half of the pattern
    for(i = 1; i <= 5; i++) {
        // Print spaces for alignment
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");
        }

        // Print ascending numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print descending numbers
        for(j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    // Lower half of the pattern (reverse of upper half)
    for(i = 4; i >= 1; i--) {
        // Print spaces for alignment
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");
        }

        // Print ascending numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print descending numbers
        for(j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
}
