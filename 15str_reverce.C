#include <stdio.h>
#include <conio.h>  // For clrscr() and getch()

void main() {
    char str[200];
    int i, length = 0;

    clrscr();  // Clear the screen

    // Input the string
    printf("Enter a string: ");
    gets(str);  // Use gets() to input the string

    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Display the string in reverse order
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }

    getch();  // Wait for user input before exiting
}
