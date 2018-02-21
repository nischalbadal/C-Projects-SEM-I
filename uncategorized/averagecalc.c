/*
Purpose: To add set of different numbers and find sum and average of sets individually.
Author: Nischal Badal
Date: 12.31.2016
*/ 
#include<stdio.h>
int main()
{
	int num_count;
	int num;
	float sum;
	int counter=0,choice;
	float average;
	int count;
	
	do
		{
			
			printf("\nHow many sets of number to take ?(0 to exit)");
			scanf("%d",&choice);
		
			if (choice<0)
				{
					printf("The number you entered is negative.");
	    		}
			else if(choice>0)
		  	{
			  
			 	 while(counter<choice)
		   		  {
						sum=0;
						average=0;
					do
					{
			
					printf("\nHow many numbers to take ?(0 to exit) ");
					scanf("%d",&num_count);
		
					if (num_count<0)
					{
						printf("The number you entered is negative.");
	    			}
					else
					{
						count=num_count;
						while(num_count>=1)
					 	{
							printf("Enter number: ");
							scanf("%d",&num);
							sum+=num;
							num_count--;
				        }	
		
						printf("The sum is %.2f",sum);
						average=sum/count;
						printf("\nAverage is: %.2f",average);
						counter++;
					}
		   			}while(num_count!=0);
				 }
			}
	}while(choice!=0);
		

	getch();	
}
