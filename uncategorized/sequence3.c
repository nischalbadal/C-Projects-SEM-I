/*
Purpose:To print the sum of sequence 2+5+8+11+...... upto desired input using for() loop.
Author:Nischal Badal
Date:12.28.2016
*/
#include<stdio.h>
int main()
{
	int counter;
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
	
			for(counter=2;counter<=loop_count;counter+=3)
				{
					sum+=counter;
	
				}
		
			printf("The sum is %d",sum);
			getch();
	    }
}
