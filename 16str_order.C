#include <stdio.h>
#include <conio.h>  // For clrscr() and getch()
#include <string.h>  // For string comparison functions

void main() {
    char names[100][100];  // Array to store names
    char temp[100];  // Temporary variable for swapping
    int N, i, j;

    clrscr();  // Clear the screen

    // Input the number of names
    printf("Enter N: ");
    scanf("%d", &N);
    getchar();  // To consume the newline character left by scanf()

    // Input names
    printf("Enter %d names:\n", N);
    for (i = 0; i < N; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';  // Remove trailing newline
    }

    // Sort names in ascending order using bubble sort
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // Swap names[i] and names[j]
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Display the names in ascending order
    printf("\nNames in ascending order:\n");
    for (i = 0; i < N; i++) {
        printf("%s\n", names[i]);
    }

    getch();  // Wait for user input before exiting
}
