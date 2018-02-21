/*
Purpose: To calculate average of list of numbers and find ow much each number is deviated from the average.
Author:Nischal Badal
Date:1/25/2017
*/

#include<stdio.h>
int main()
#define SIZE 50 
{
	int i,j;
	int num[SIZE];
	int count;
	float dev;
	float sum=0,avg;
	
	printf("How many numbers to take ");
	scanf("%d",&count);
	
	for(i=0;i<count;i++)
	{
		printf("Enter number: ");
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	
	printf("The sum is: %.2f",sum);
	avg=sum/count;
	printf("\nThe average is: %.2f",avg);
	

	for(i=0;i<count;i++)
	{
		dev=avg-num[i];
		printf("\n Deviation is %.2f",dev);
	}
}
