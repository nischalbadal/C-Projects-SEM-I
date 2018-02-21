/*
Purpose:To print the sum of sequence 2+5+8+11+...... upto desired input using do while() loop.
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
		
		if (loop_count<0)
			{
				printf("Please enter a positive number");
			}
		else		
			{
				do
				{
					sum+=counter;
					counter+=3;
				}while(counter<=loop_count);
	
				printf("The sum is %d",sum);
				getch();

			}
	}
