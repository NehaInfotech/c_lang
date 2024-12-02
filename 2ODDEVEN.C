#include <stdio.h>
#include<conio.h>
    void main(){
int num1,num2,i;clrscr();
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check if the first number is smaller
    if (num1 < num2) {
	// Print odd numbers in the range from num1 to num2
	printf("Odd numbers in the range:\n");
	for (i = num1; i <= num2; i++) {
	    if (i % 2 != 0) {
		printf("%d ", i);
	    }
	}
    } else {
	// Print even numbers in the range from num2 to num1
	printf("Even numbers in the range:\n");
	for (i = num2; i <= num1; i++) {
	    if (i % 2 == 0) {
		printf("%d ", i);
	    }
	}
    }
    printf("\n");

    getch();
}
