#include <stdio.h>
#include <conio.h>  // Required for clrscr() and getch()

void main() {
    int start, end, first = 0, second = 1, next;

    clrscr();  // Clear the screen

    // Input the range
    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);

    printf("Fibonacci series in the range [%d, %d]:\n", start, end);

    // Handle special case for 0 if within range
    if (start <= 0) {
        printf("%d ", first);
    }

    // Generate Fibonacci series
    next = first + second;
    while (next <= end) {
        if (next >= start) {
            printf("%d ", next);
        }
        first = second;
        second = next;
        next = first + second;
    }

    printf("\n");

    getch();  // Wait for user input to close the program
}
