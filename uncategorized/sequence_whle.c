/*
Purpose:To print the sum of sequence 2+5+8+11+...... upto desired input using while() loop.
Author:Nischal Badal
Date:12.28.2016
*/
#include<stdio.h>
int main()
{
	int counter=2;
	int loop_count;
	int sum=0;
	 
	printf("Enter the last number of the required sequence: ");
	scanf("%d",&loop_count);
	
		while(counter<=loop_count)
			{
				sum+=counter;
				counter+=3;
			}
		printf("The sum is %d",sum);
		getch();
}
