#include <stdio.h>
#include <conio.h>  // Required for clrscr() and getch()

void main() {
    int N, i, j, isPrime;

    clrscr();  // Clear the screen

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Prime numbers from 1 to %d are:\n", N);

    // Loop through numbers from 2 to N (1 is not prime)
    for (i = 2; i <= N; i++) {
        isPrime = 1;  // Assume current number is prime

        // Check divisibility from 2 to sqrt(i)
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // Not a prime
                break;
            }
        }

        // If isPrime is still 1, it's a prime number
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    getch();  // Wait for user input before closing the program
}
