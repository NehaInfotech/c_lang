#include <stdio.h>
#include <conio.h>  // For clrscr() and getch()

void main() {
    int A[100], N, i, j, temp;

    clrscr();  // Clear the screen

    // Input the size of the array
    printf("Enter the size of the array (N): ");
    scanf("%d", &N);

    // Input the elements of the array
    for (i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    // Sort the array using the Bubble Sort algorithm
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                // Swap A[j] and A[j + 1]
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Array sorted in ascending order:\n");
    for (i = 0; i < N; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    getch();  // Wait for user input before exiting
}
