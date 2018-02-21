/*
Purpose:To read, sum and product any two matrix using function.
Author:Nischal Badal
Date:2/1/2017
*/
#include<stdio.h>
#define MAXR 30
#define MAXC 30
void read_mat(int[][MAXC],int,int);
void sum_mat(int[][MAXC],int[][MAXC],int[][MAXC],int,int);
void print_mat(int[][MAXC],int,int);
void prod_mat(int[][MAXC],int,int,int[][MAXC],int,int,int[][MAXC]);
int main()
{
	int matA[MAXR][MAXC],matB[MAXR][MAXC];
	int sum[MAXR][MAXC];
	int prod[MAXR][MAXC];
	int a,b,c,d;

	printf("Enter order of Matrix A :\n ");
	printf("Row:");	
	scanf("%d",&a);
	printf("Column:");
	scanf("%d",&b);
	printf("Enter elements into first matrix:\n ");
	read_mat(matA,a,b);
	printf("Matrix A is :\n");
	print_mat(matA,a,b);
	
	printf("Enter order of Matrix B :\n ");
	printf("Row:");	
	scanf("%d",&c);
	printf("Column:");
	scanf("%d",&d);
	printf("Enter elements into second matrix:\n ");
	read_mat(matB,c,d);

	printf("Matrix B is:\n");
	print_mat(matB,a,b);

	sum_mat(matA,matB,sum,a,b);

	printf("Matrix A + Matrix B is :\n");
	print_mat(sum,a,b);
	
	printf("Product is :\n");
	prod_mat(matA,a,b,matB,c,d,prod);
	print_mat(prod,a,d);
}
void read_mat(int mat[][MAXC],int x,int y)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		printf("For row %d : \n",i+1);
		for(j=0;j<y;j++)
		{
		printf("Enter element %d : ",j+1);
		scanf("%d",&mat[i][j]);
		}

	}
}
void sum_mat(int matA[][MAXC],int matB[][MAXC], int sum[][MAXC],int a,int b)
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			sum[i][j]=matA[i][j]+matB[i][j];
		}
	}
}
void print_mat(int mat[][MAXC],int x,int y)
{
int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
		printf(" %d ",mat[i][j]);
		}
		printf("\n");
	}	
}
void prod_mat(int matA[][MAXC],int a,int b,int matB[][MAXC],int c,int d,int prod[][MAXC])
{
	int i,j,k;
	int sum;
	for(i=0;i<a;i++)
	{
		for(j=0;j<d;j++)
		{
			sum=0;
			for(k=0;k<d;k++)
			{
				sum=sum+ matA[i][k]*matB[k][j];
			}
			prod[i][j]=sum;
		}
	}
}
