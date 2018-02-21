/*
Purpose:To find largest number from three numbers using function.
Author:Nischal Badal
Date:2/1/2017
*/
#include<stdio.h>
int largest(int,int);
int main()
{
	int num1,num2,num3;
	int max;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	printf("Enter third number: ");
	scanf("%d",&num3);
	
	max=largest(num1,num2);
	printf("%d is largest.",largest(max,num3));	
}

int largest(int a,int b)
{
	return a>b?a:b;
}
