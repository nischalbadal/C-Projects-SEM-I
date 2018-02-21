/*
Purpose: To Determine the value of each of the following expressions:
		(3*i-2*j) % (2*d-c)
		2 * ((i/5) + (4*(j-3)) % (i+j-2))
		++i
		i++ 
		j != 6
		(2*x+y) == 0
		z -= (x>=0) ? x : 0 
		(x>y) || (i>0) && (j<5)	
		!(i<=j) && !(x>0)
		k=(j==5) ? i : j
		2*x+y==0 
Author: Nischal Badal
Date: 12.17.2016
*/
#include<stdio.h>

int main()
{
	int i = 8, j = 5;
    float x = 0.005, y = -0.01;
	char c = 'c', d = 'd';
	int k;
	float z=2.03;
	
	printf("%d",(3*i-2*j) % (2*d-c));// output of this expression is 14
	
	printf("\n%d",2 * ((i/5) + (4*(j-3)) % (i+j-2)));// output of this expression is 18
	
	printf("\n%d",++i);// output of this expression is 9
	
	printf("\n%d",i++);// output of this expresion is 9
	
	printf("\n%d",j!= 6);// output of this expression is 1
	
	printf("\n%d",(2*x+y)==0);// output of this expression is 1
	
	z-=(x>=0)?x:0;
	printf("\n%g",z);// the output of this expression is 2.025 
	
	printf("\n%d",(x>y)||(i>0)&&(j<5));// output of this expression is 1
	
	printf("\n%d",!(i<=j)&&!(x>0));// output of this expression is 0
	
	k=(j==5)?i:j;
	printf("\n%d",k);// output of this expression is 10

	printf("\n%d",2*x+y==0);// output of this expression is 1

	getch();
}
