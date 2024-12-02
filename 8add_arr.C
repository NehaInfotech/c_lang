#include <stdio.h>
#include <conio.h>  // For clrscr() and getch()

void main() {
    int A[100], B[100], N, n1, pos, i, j;

    clrscr();  // Clear the screen

    // Input the size and elements of array A
    printf("Enter the size of array A (N): ");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    // Input the size and elements of array B
    printf("Enter the size of array B (n1): ");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    // Input the position where array B will be inserted
    printf("Enter the position to insert array B into array A: ");
    scanf("%d", &pos);

    // Adjust position to zero-based index
    pos--;

    // Shift elements of A to the right to make space for B
    for (i = N - 1; i >= pos; i--) {
        A[i + n1] = A[i];
    }

    // Insert elements of B into the specified position of A
    for (i = 0, j = pos; i < n1; i++, j++) {
        A[j] = B[i];
    }

    // Update the size of array A
    N = N + n1;

    // Display the updated array A
    printf("Updated array A:\n");
    for (i = 0; i < N; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    getch();  // Wait for user input before exiting
}
