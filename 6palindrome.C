#include <stdio.h>
#include <conio.h>  // Required for clrscr() and getch()

void main() {
    int number, original, reversed = 0, remainder;

    clrscr();  // Clear the screen

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;  // Store the original number

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    // Check if original and reversed are the same
    if (original == reversed) {
        printf("%d is a Palindrome.\n", original);
    } else {
        printf("%d is not a Palindrome.\n", original);
    }

    getch();  // Wait for user input before closing the program
}
