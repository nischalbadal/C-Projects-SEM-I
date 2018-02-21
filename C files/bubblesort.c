/*
Purpose: To sort number in ascending and descending order.
Author:Nischal Badal
Date:1/25/2017
*/

#include<stdio.h>
int main()
{
	int num[50];
	int i,j,k;
	int temp,count;
	
    printf("How many numbers : ");
	scanf("%d",&count);
	
	for(i=0;i<count;i++)
	{
		printf("Enter Number:");
		scanf("%d",&num[i]);
	}
	for(i=0;i<count;i++)
    {
		for(j=i+1;j<count;j++)
		{
		if(num[j]<num[i])
		{
			temp=num[i];
			num[i]=num[j];
			num[j]=temp;
			
		}     	
	   }
	}
	 printf("In Acsending order: ");
	 for(i=0;i<count;i++)
	 {
	 	
		printf("%d ",num[i]);
	 }
    printf("\nIn Descending order: ");
    k=count-1;
	for(i=k;i>=0;i--)
    {
    	printf("%d ",num[i]);
    	
	}
}
