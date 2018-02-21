#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count;
	int *numbers;
	int i,j,temp;
	
	printf("How many numbers to take ? ");
	scanf("%d",&count);
	
	numbers=(int*)malloc(count*sizeof(int));
	
	for(i=0;i<count;i++)
	{
		printf("Enter number: ");
		scanf("%d",numbers+i);
	}
	for(i=0;i<count-1;i++)
    {
		for(j=i+1;j<count;j++)
		{
		
		if(*(numbers+j)<*(numbers+i))
		{
			temp=*(numbers+i);
			*(numbers+i)=*(numbers+j);
			*(numbers+j)=temp;
			
		}     	
	   }
	}
	 printf("In Acsending order: ");
	 for(i=0;i<count;i++)
	 {
	 	
		printf("%d ",*(numbers+i));
	 }
}
