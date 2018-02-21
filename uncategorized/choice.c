#include<stdio.h>
int main()
{
	int choice;
	int num1,num2;
	float sum,mul,div;
	

	do
	{
	printf("\nEnter first number ");
	scanf("%d",&num1);
	printf("Enter second number ");
	scanf("%d",&num2);
	printf("Enter your choice :");
	printf("\n 1 to add");
	printf("\n 2 to multiply");
	printf("\n 3 to divide");
	printf("\n 0 to exit");
	
	scanf("\n %d",&choice);

   switch(choice) {
      case 1 :
		 sum=num1+num2;
         printf("%f",sum );
         break;
      case 2 :
        mul=num1*num2;
		 printf("%f",mul );
         break;
      case 3 :
        div=num1/num2;
		 printf("%f",div );
         break;
      default:
      	printf("End!");
   }
   
 }while (choice!=0);
}

