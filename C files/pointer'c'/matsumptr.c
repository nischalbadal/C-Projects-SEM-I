#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void read_mat(int *[],int,int);
void print_mat(int *[],int,int);
void sum_mat(int *[],int *[],int *[],int,int);
int main()
{
	int *matA[3],*matB[3],*sum[3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		matA[i]=(int *)malloc(3*sizeof(int));
		matB[i]=(int *)malloc(3*sizeof(int));
		sum[i]=(int *)malloc(3*sizeof(int));
	}
	
	printf("Enter elements into first matrix: \n");	
	read_mat(matA,3,3);

	printf("Matrix A is :\n");
	print_mat(matA,3,3);

	printf("Enter elements into second matrix: \n");	
	read_mat(matB,3,3);	

	printf("Matrix B is :\n");
	print_mat(matB,3,3);

	sum_mat(matA,matB,sum,3,3);
	printf("Sum is :\n");
	print_mat(sum,3,3);
	
	getch();
}



void read_mat(int *matA[],int row, int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		printf("For %d row:",i+1);
		for(j=0;j<col;j++)
		{
			printf("Enter %d element:",j+1);
			scanf("%d",matA[i]+j);
		
		}
	}
}
void print_mat(int *matA[],int row, int col)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",*(matA[i]+j));
		}
		printf("\n");
	}
}
void sum_mat(int *matA[],int *matB[], int *sum[],int row, int col)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			*(sum[i]+j)=*(matA[i]+j)+*(matB[i]+j);
		}
	}
}
