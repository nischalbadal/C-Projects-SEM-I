#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *numbers;
	int count,i;
	float avg,sum=0;
	
	printf("How many numbers to take? ");
	scanf("%d",&count);
	
	numbers=(int*) malloc (count*sizeof(int));

	for(i=0;i<count;i++)
	{
		printf("Enter number: ");
		scanf("%d",numbers+i);
		sum += *(numbers+i);
	}

	printf("Sum is %.2f",sum);
	avg=sum/count;
	printf("\n Average is: %.2f",avg);

	for(i=0;i<count;i++)
	{
	printf("\n Deviation of %d  is %.2f",*(numbers+i),avg-*(numbers+i));	
	}
}
