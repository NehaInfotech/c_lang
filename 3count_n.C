#include <stdio.h>
#include <conio.h>

void main() {
    int number, count = 0;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle negative numbers
    if (number < 0) {
        number = -number;
    }

    do {
        count++;
        number /= 10;
    } while (number > 0);

    printf("Number of digits: %d\n", count);
    getch();
}
