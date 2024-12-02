#include <stdio.h>
#include <conio.h>  // For clrscr() and getch()
#include <string.h>  // For strlen()

void main() {
    char str[200];
    int i, length, alphabets = 0, digits = 0, upper = 0, lower = 0, spaces = 0, words = 1, others = 0;

    clrscr();  // Clear the screen

    // Input the string
    printf("Enter a string: ");
    gets(str);  // Use gets() to input the full line with spaces

    length = strlen(str);  // Get the length of the string

    // Traverse the string to count each type of character
    for (i = 0; i < length; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            alphabets++;
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        if (str[i] >= '0' && str[i] <= '9')
            digits++;
        if (str[i] == ' ')
            spaces++;
        if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
            words++;
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || 
              (str[i] >= '0' && str[i] <= '9') || str[i] == ' '))
            others++;
    }

    // Display the results
    printf("\n(i) Length of given string: %d", length);
    printf("\n(ii) Total number of alphabets: %d", alphabets);
    printf("\n(iii) Total number of digits: %d", digits);
    printf("\n(iv) Total number of uppercase characters: %d", upper);
    printf("\n(v) Total number of lowercase characters: %d", lower);
    printf("\n(vi) Total number of spaces: %d", spaces);
    printf("\n(vii) Total number of words: %d", words);
    printf("\n(viii) Total number of other characters: %d", others);

    getch();  // Wait for user input before exiting
}
