/*
Purpose: To demonstrate the use of function gets() and puts()
Author: Nischal Badal
Date: 30 Nov. 2016
*/
#include<stdio.h>
int main()

{
	char name[80];
	
	printf("\n Enter your name:");
	gets(name);
	
	putchar(name[0]);
	
	getch();
}

