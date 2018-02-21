/*
Purpose: To read first and last name of person and disply it as full name
Author : Nischal Badal
Date: 25 nov. 2016
*/
#include <stdio.h>
#include <conio.h>
int main()
{
	char fname[80];
	char lname[80];
	
	printf("Enter first name:");
	scanf("%s",&fname);
	printf("Enter last name:");
	scanf("%s",&lname);
	printf("your full name is: %s",fname);
	printf("%s",lname);
	getch();	
}
