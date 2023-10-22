//program which checks if digits of a given 2-digit number
//are in increasing order
#include <math.h>
#include <conio.h>
#include <stdio.h>
void main()
{
	int number;
	printf("two-digit number: ");
	scanf("%d", &number);
	int digit1 = number / 10;
	int digit2 = number % 10;

	if(number<10 || number>99)
	{ printf("Invalid value. Please enter a 2-digit number\n");
	}

	else if(digit2>digit1)
	{
		printf("Digits are in increasing order");
	}
	else
	{
		printf("Digits are in decreasing order");
	}

	getch();
}
