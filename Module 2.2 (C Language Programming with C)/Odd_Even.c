//find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
	int number;
	printf("Enter a number:");
	scanf("%d", &number);
	(number%2==0) ? printf("Even Number") : printf("Odd Number");
	return 0;
 } 
