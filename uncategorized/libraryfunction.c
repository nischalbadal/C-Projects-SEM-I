/*
Purpose:To Determine the value of each of the following expressions:
	isdigit(c)
	pow(x-y,3.0)
	ceil(x+y)
	floor(x+y)
	toupper(d)
	isupper(j)
	toascii(10*j)
Author:Nischal Badal
Date:12.17.2016
*/
#include<stdio.h>
#include<math.h>
int main()

{

	int i = 8, j = 5;
    float x = 0.005, y = -0.01;
	char c = 'c', d = 'd';
	double p;
   if (isdigit(c))// isdigit() header file .it checks whether the the variable contains number or not.
      printf ("Entered character is digit");
   else
      printf ("Entered character is not digit");
	
    p=pow(x-y,3.0);// pow() calculates the value of x to the power of y.
	printf("\n%f",p);

    printf("\n%f",ceil(x+y));//ceil() function rounds up to the nearest integer.
    
    printf("\n%f",floor(x+y));// floor() functions rounds down to the nearest integer.
    
    printf("\n%c",toupper(d));// toupper() function returns uppercase equivalent of the parameter.

	printf("\n%d",isupper(j));//isupper() function takes a single argument in the form of an integer and returns a value of type int.
	
	printf("\n%d",toascii(10*j));// toascii() function converts its argument to a 7-bit US-ASCII character code.

	getch();
}
