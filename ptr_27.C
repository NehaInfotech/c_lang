#include <stdio.h>

void main() {
    int i, j, num, spaces;

    // Loop for each row
    for(i = 1; i <= 5; i++) {
        num = i;  // Set the starting number for the row

        // Loop for spaces before the numbers
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");  // Print leading spaces for alignment
        }

        // Loop to print the increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d", num);  // Print the current number
            num++;  // Increment the number
        }

        num -= 2;  // Adjust the number before printing the decreasing part

        // Loop to print the decreasing numbers
        for(j = 1; j < i; j++) {
            printf("%d", num);  // Print the current number
            num--;  // Decrement the number
        }

        printf("\n");  // Move to the next line after each row
    }
}
