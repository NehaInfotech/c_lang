#include <stdio.h>
#include <conio.h>  // For clrscr() and getch()

void main() {
    char str[200];
    int i;

    clrscr();  // Clear the screen

    // Input the string
    printf("Enter a string: ");
    gets(str);  // Use gets() for input

    // Display Sentence case
    printf("\n(i) Sentence case: ");
    int firstLetter = 1;
    for (i = 0; str[i] != '\0'; i++) {
        if (firstLetter && (str[i] >= 'a' && str[i] <= 'z')) {
            putchar(str[i] - 32);
            firstLetter = 0;
        } else if (str[i] == '.') {
            firstLetter = 1;
            putchar(str[i]);
        } else {
            putchar(str[i]);
        }
    }

    // Display lowercase
    printf("\n(ii) Lowercase: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            putchar(str[i] + 32);
        else
            putchar(str[i]);
    }

    // Display uppercase
    printf("\n(iii) Uppercase: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            putchar(str[i] - 32);
        else
            putchar(str[i]);
    }

    // Display Title case
    printf("\n(iv) Title case: ");
    int isSpace = 1;
    for (i = 0; str[i] != '\0'; i++) {
        if (isSpace && (str[i] >= 'a' && str[i] <= 'z')) {
            putchar(str[i] - 32);
            isSpace = 0;
        } else if (str[i] == ' ') {
            putchar(str[i]);
            isSpace = 1;
        } else {
            putchar(str[i]);
        }
    }

    // Display toggle case
    printf("\n(v) Toggle case: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            putchar(str[i] - 32);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            putchar(str[i] + 32);
        else
            putchar(str[i]);
    }

    getch();  // Wait for user input before exiting
}
