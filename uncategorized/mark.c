/*
Purpose: To read marks of four subjects and calculate percentage
Author: Nischal Badal
Date:25 Nov 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int english;
	int probability;
	int statistics;
	int c_programming;
	int total;
	float percentage;
	
	printf("Enter marks of english:");
	scanf("%d",&english);
	printf("Enter marks of probability:");
	scanf("%d",&probability);
	printf("Enter marks of statistics:");
	scanf("%d",&statistics);
	printf("Enter marks of C programming:");
	scanf("%d",&c_programming);
	total=english+probability+statistics+c_programming;
	percentage=total/4;
	printf("Your total marks is :%d",total);
	printf("\nYour percentage is:%.2f",percentage);
	getch();
}
