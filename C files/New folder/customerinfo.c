#include<stdio.h>
#include<stdlib.h>
#define SIZE 2

typedef struct{
	int itemnum;
	char itemname[50];
	int price;
}items;

typedef struct{
	char customer_name[50];
    int phonenumber;
	int account_number;
	items order[2];
}customer;

void read(customer*);
void print(customer,int);
void orderitem(items *);
void printitem(items);

int main()
{
	int i,j;
    customer new_customers[SIZE];
	FILE *fp_read;
	FILE *fp_write;
	
	fp_write=fopen("test.bin","w");
	for(i=0;i<SIZE;i++)
	{
		read(&new_customers[i]);
		fwrite(&new_customers[i], sizeof(customer),1,fp_write);
	}
	fclose(fp_write);
}
		
    
/*	for(i=0;i<SIZE;i++)
	{
		print(new_customers[i],i);
	}

}
void print(customer new_customers ,int a)
{
	int i;
	
		printf("Record %d \n",a+1);
				
		printf("Customer Name: ");
		printf("%s \n",new_customers.customer_name);
	
		printf("Phone Number: ");
		printf("%s \n",new_customers.phonenumber);
	
		printf("Account Number: ");
		printf("%s \n",new_customers.account_number);
		
		printf("Orders Are: ");
		
		for(i=0;i<2;i++)
		{
			printitem(new_customers.order[i]);
		}
}
*/
void read(customer *new_customers)
{
	int i;

		printf("Enter Customer's Name: ");
		scanf("%s",&new_customers->customer_name);
		fflush(stdin);
		
		printf("Enter Phone Number: ");
		scanf("%d",&new_customers->phonenumber);
		fflush(stdin);
		
		printf("Enter Account Number: ");
		scanf("%d",&new_customers->account_number);
		fflush(stdin);
	
		for(i=0;i<2;i++)
		{
		orderitem(&new_customers->order[i]);
		}
}	
void orderitem(items *order)
{
	printf("Enter Item Name: ");
	scanf("%s",&order->itemname);

	printf("Enter Item Number: ");
	scanf("%d",&order->itemnum);
	
	printf("Enter Item price: ");
	scanf("%d",&order->price);
 } 
void printitem(items order )
{
	printf("Item Name: ");
	puts(order.itemname);

	printf("Item Number: %d",order.itemnum);
	
	printf("Item Name: %d",order.price);
 } 
