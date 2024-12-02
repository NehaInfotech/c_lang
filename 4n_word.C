#include <stdio.h>
#include <conio.h>  // Required for clrscr() and getch()

void main() {
    int number, digit;
    char *words[] = { "Zero", "One", "Two", "Three", "Four", 
                      "Five", "Six", "Seven", "Eight", "Nine" };
    int reversed = 0, temp;

    clrscr();  // Clear the screen

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle negative numbers
    if (number < 0) {
        printf("Negative numbers are not supported.\n");
        getch();  // Pause the screen
        return;
    }

    // Reverse the number to process in correct order
    temp = number;
    while (temp > 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }

    // Process each digit in the reversed number
    while (reversed > 0) {
        digit = reversed % 10;
        printf("%d - %s\n", digit, words[digit]);
        reversed /= 10;
    }

    // Handle the case when the input is 0
    if (number == 0) {
        printf("0 - Zero\n");
    }

    getch();  // Wait for user input to close the program
}
