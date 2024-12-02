#include <stdio.h>
#include <conio.h>  // For clrscr() and getch()

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;  // Base case: 0! = 1 and 1! = 1
    else
        return n * factorial(n - 1);  // Recursive call
}

void main() {
    int number, result;

    clrscr();  // Clear the screen

    // Input the number
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    // Calculate factorial using recursion
    result = factorial(number);

    // Display the result
    printf("Factorial of %d is %d\n", number, result);

    getch();  // Wait for user input before exiting
}
