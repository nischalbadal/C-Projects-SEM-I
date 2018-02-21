/*
Purpose:To find factorial of any number using function.
Author:Nischal Badal
Date:2/1/2017
*/
#include<stdio.h>
long int fact(float);
int main()
{
	float number;
	
	printf("Enter any number: ");
	scanf("%f",&number);
	printf("Its Factorial is %d",fact(number));
	
}
long int fact(float x)
{
	int i;
	long int result=1;
	for(i=1;i<=x;i++)
	{
		result*=i;
	}
	return result;
}
