#include<stdio.h>
#include <conio.h>
int main()
{
	float num1;
	float num2;
	float div;
	printf("Divison of two Numbers:");
	printf("Enter first number;");
	scanf("%d",&num1);
	printf("Enter second number;");
	scanf("%d",&num2);
	div=num1/num2;
	printf("The answer is  %.2f\n",div);
	getch();
}

