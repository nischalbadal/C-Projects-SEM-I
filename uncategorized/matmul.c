#include<stdio.h>
int main()
{
	int a[3][3];
	int b[3][3];
	int prod[3][3];
	int i,j,k,sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		 sum = 0;
         for (k = 0; k <= 2; k++)
		  {
 		    sum = sum + a[i][k] * b[k][j];
		  }
           prod[i][j] = sum;
		}
	}
	for(i=0; i<3;i++)
	{
		for(j=0; j<3;j++)
		{
			printf(" %d",prod[i][j]);
		}
	printf("\n");
	}
	
}
