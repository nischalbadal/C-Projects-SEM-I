/*
Purpose: To determine value of different types of operators.
Author: Nischal Badal
Date: 12.12.2016
*/

#include<stdio.h>

int main()
{
	int i=8,j=5;
	float x=0.005,y=-0.01;
	char c='c',d='d';
	
	printf("%d\n",2*((i/5)+(4*(j-3)))%(i+j-2));//output of this operation is 7
	
	printf("%f\n",(i-3*j)%(c+2*d)/(x-y));	//output of this expression is -466.666687
	
	printf("%d\n",(5*(i+j)>c));//output of this expression is 0
	
	printf("%g\n",2*x+(y==0));//output of ths expression is 0.01
	
	printf("%d\n",(x>y)&&(i>0)||(j<5));//output of this expression is 1
	
	printf("%d\n",(x<y)&&(i>0)&&(j<5));//output of this expression is 0
	
	printf("%d\n",(j>5)?i:j);//output of this expression is 5
	
	printf("%d\n",(c<d)?c:d);//output of this expression is 99
	
	printf("%d\n",!(c==99));//output of this expression is 0
	
	printf("%d",i-=(j>0)?j:0);//output of this expression is 3
}
