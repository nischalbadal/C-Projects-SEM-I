/*
purpose: To Determine the value of each of the following expressions: 
		2 * ((i/5) + (4*(j-3))) % (i+j-2)
		(i-3*j) % (c+2*d) / (x-y)
		5*(i+j)>c
		2*x+(y==0)
		(x>y) && (i>0) || (j<5)
		(x<y) && (i>0) && (j<5)
		k = (j>5) ? i : j
		a = (c<d) ? c : d
		!(c==90)
		i -=(j>0)?j:0
Author: Nischal Badal
Date: 12.17.2016
*/
#include<stdio.h>

int main()
{
	int i = 8, j = 5;
    float x = 0.005, y = -0.01;
	char c = 'c', d = 'd';
	int k , a;
	
	printf("%d",2*((i/5)+(4*(j-3)))%(i+j-2));// output of this expression is 7
	
	printf("\n%f",(i-3*j)%(c+2*d)/(x-y));// output of this expression is -466.666687
	
	printf("\n%d",5*(i+j)>c);// output of this expression is 0
	
	printf("\n%g",2*x+(y==0));// output of this expression is 0.01
	
	printf("\n%d",(x>y)&&(i>0)||(j<5));// output of this expression is 1
	
	printf("\n%d",(x<y)&&(i>0)&&(j<5));// output of this expression is 0
	
	k = (j>5)?i:j;
	printf("\n%d",k);// output of this expression is 5
	
	a = (c<d)?c:d;
	printf("\n%d",a);//output of this expression is 99
	
	printf("\n%d",!(c==90));// output of this expression is 1
	
	i-=(j>0)?j:0;
	printf("\n%d",i);// output of this expression is 3
}

