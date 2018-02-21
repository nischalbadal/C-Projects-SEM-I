/*
Purpose: To calculate sum of two input matrix.
Author:Nischal Badal
Date:1/25/2017
*/
#include<stdio.h>
int main()
{
	int matA[3][3];
	int matB[3][3];
	int sum[3][3];
	int i,j;
	 printf("Enter Elements into first matrix A[3x3]\n");
	for(i=0;i<3;i++)
	{	
		printf("For row %d :\n",i+1);
		for(j=0;j<3;j++)
		{
		
			printf("Enter element %d :",j+1);
			scanf("%d",&matA[i][j]);
		
		}
	}
	printf("\nEnter Elements into second matrix B[3x3]\n");
	for(i=0;i<3;i++)
	{
		printf("For row %d :\n",i+1);
		for(j=0;j<3;j++)
		{
			printf("Enter  element %d:",j+1);
			scanf("%d",&matB[i][j]);
		
		}
	}
	printf("Matrix A[3x3]+Matrix B[3x3] is: \n");
	for(i=0;i<3;i++)
	
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=matA[i][j]+matB[i][j];
			printf("%d ",sum[i][j]);
		}
	printf("\n");
	}
	
}
