/*
Purpose:To find factorial of any number using recursion.
Author:Nischal Badal
Date:2/1/2017
*/
#include<stdio.h>
long int fact(int);
int main()
{
	int num;
	
	printf("Enter Number :");
	scanf("%d",&num);
	
	printf("Factorial is : %d",fact(num));
	
}
long int fact(int x)
{
	if(x==0)
	return 1;
	
	return  x*fact(x-1);
}
