
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

	 for(i=0;i<count;i++)
	 {
	 	
		printf("%d ",num[i]);
	 }
   
