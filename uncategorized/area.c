/*
purpose: Program to calculate the area and circumference of the circle. 
author: Nischal Badal
date:25 Nov. 2016
*/
#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main()
{
	float radius;
	float circum;
	float area;
	
	printf("Enter radius:");
	scanf("%f",&radius);
	circum=2*PI*radius;
	area=PI*radius*radius;
	printf("circumference is %.2f\n",circum);
	printf("area is %.2f\n",area);
	getch();
	
}

