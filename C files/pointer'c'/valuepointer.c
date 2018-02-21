#include<stdio.h>
int main()
{
	int i=5;
	int *ptr_j, **ptr_k;
	

	ptr_j=&i;
	ptr_k=&ptr_j;
	
	printf("The value of I is %d",i);	
	printf("\nThe address of I is %x",&i);
	printf("\n");
	
	printf("\nThe value of J is %d",ptr_j);
	printf("\nThe location of J is %x",&ptr_j);
	printf("\nThe value of I from J is %d",*ptr_j);
	printf("\n");
	
	printf("\nThe value of K is %d",ptr_k);
	printf("\nThe location of k is %x",&ptr_k);
	printf("\nThe value of j from k is %x",*ptr_k);
	printf("\nThe value of i from k is %x",**ptr_k);
}
