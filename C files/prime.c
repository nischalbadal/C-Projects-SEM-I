#include<stdio.h>
int main()
{
	int a=0,i,j,num;
	 i=1;
	printf("Enter the last number of prime number series: ");
	scanf("%d",&num);
	 for(i = 2; i <= num; i++)
	 {
        a= 0;
        j=2;
		while(j <= i/2)
		{
             if(i % j == 0)
			 {
         		a= 1;
                 break;
    		 }
       	 j++;
		}
        if(a==0 && num!= 1)
          printf("%d ",i);
     }
	getch();
}

