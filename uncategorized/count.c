#include<stdio.h>
int main()
{
	int num[10]={1,2,2,2,5,4,8,3,7,6};
	int i,j,k;
	int count,temp;
	

		for(i=0;i<10;i++)
    {
		for(j=i+1;j<10;j++)
		{
		if(num[j]==num[i])
		 { 
			count+=count;
		 }     	
	   }
	printf("%d",count);
	}
	
}
