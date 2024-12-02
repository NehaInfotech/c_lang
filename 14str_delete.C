#include <stdio.h>
#include <conio.h>  // For clrscr() and getch()

void main() {
    char str[200], ch;
    int i, j;

    clrscr();  // Clear the screen

    // Input the string
    printf("Enter a string: ");
    gets(str);  // Use gets() to input the string

    // Input the character to delete
    printf("Enter the character to delete: ");
    scanf("%c", &ch);

    // Traverse the string to delete the character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];  // Shift characters to the left
            }
            i--;  // Adjust index to recheck the current position
        }
    }

    // Display the modified string
    printf("Modified string: %s\n", str);

    getch();  // Wait for user input before exiting
}
