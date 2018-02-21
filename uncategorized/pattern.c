#include<stdio.h>
int main()
{
   int row, col, n=5, temp;
   temp = n;
   for ( row = 1 ; row <= n ; row++ )
   {
      for ( col = 1 ; col < temp ; col++ )
         {printf(" ");}
 
      temp--;
       for ( col = 1 ; col <= 2*row - 1 ; col++ )
         {printf("*");}
 
      printf("\n");
   }
 
}
