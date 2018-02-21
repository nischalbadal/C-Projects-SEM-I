/*
Purpose: To demonstrate the use of getchar() ad putchar().
Author: Nischal Badal 
Date:  30 Nov. 2016
*/
#include<stdio.h>
int main()
{
	char ch;

	printf("Enter any character:");
	ch=getchar();
	printf("the character entered is :");
	putchar(ch);
	printf("\n The ASCII code of given integer is:%d",ch);
	getch();
}
