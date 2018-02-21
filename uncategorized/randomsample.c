#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
int main()
{
   int n, max, num, c;
 
   printf("Enter the number of random numbers you want\n");
   scanf("%d", &n);
 
   printf("Enter the maximum value of random number\n");
   scanf("%d", &max);
 
   printf("%d random numbers from 0 to %d are :-\n", n, max); 
 
   for (c = 1; c <= 10; c++) {
    n = rand()%max;
    printf("%d\n", n);
  } 
 
  
   getch();
}

