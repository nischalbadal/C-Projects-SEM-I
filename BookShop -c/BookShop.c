#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 100

typedef struct {
	int month;
	int day;
	int year;
}date;

typedef struct{
	char name[SIZE];
	char bookname[SIZE];
	int con_num;
	float price;
	date payment;
}record;

void read(record *);
void print(record );

int main()
{
	int user_choice;
	int i,j,choice,res,rec_count;
	
	FILE *fp;
	
	date id_srch;	
	record new_record[SIZE];
	

		

	do{
		printf("\t************** WELCOME TO THE BOOKSHOP *************\n");
		printf("\n Press<1> to create entry for book");
		printf("\n Press<2> to display on specific date");
		printf("\n Press<0> to exit");
						
		printf("\n\n Enter your choice? ");
		scanf("%d",&user_choice);
							
		switch(user_choice)
		{
			case 1:
			{
				fp = fopen("test.bin","a");
				printf("\n How many entries ? ");
				scanf("%d",&choice);
	
				for(i=0;i<choice;i++)
				{
					
					read(&new_record[i]);
					
					fwrite(&new_record[i],sizeof(record),1,fp);
				}
				fclose(fp);
				system("cls");
				printf("Records added succesfully. \n\n");
				
				break;
			}
			
			case 2:
				{
						fp=fopen("test.bin","r");
						fread(&new_record[0],sizeof(record),1,fp);
						j=1;
						
						while(!feof(fp))
						{

							fread(&new_record[j],sizeof(record),1,fp);
							j++;
						
						}
					
						fclose(fp);
						
						printf("\n Enter Date to search entries on (YYYY/MM/DD): ");
						scanf("%d/%d/%d",&id_srch.year,&id_srch.month,&id_srch.day);
					
					
					for(i=0;i<j-1;i++)
					{
							if((id_srch.year==new_record[i].payment.year) && (id_srch.month==new_record[i].payment.month) && (id_srch.day==new_record[i].payment.day))
							{
								printf("\nThe Records are:");
								print(new_record[i]);
								rec_count=1;
							}
					
					}
						if(rec_count==0)
						{
							printf("  Record doesn't exists on the above mentioned date. \n");
						}
						
						printf("\n Press any key to continue...\n");
						getch();
							system("cls");
						break;
			
			}
			case 0:
			{
				printf("\n Program ended successfully :) ");	
				break;
			}
			default:
				{
					printf("\n Please enter a valid choice !\n");
					getch();
					system("cls");
				}
		}
	}while(user_choice!=0);
	
	

}


void read(record *customer)
{
	printf("\n Enter today's date (yyyy/mm/dd): ");
	scanf("%d/%d/%d", &customer->payment.year, &customer->payment.month, &customer->payment.day);
	
	printf(" Enter name of customer: ");
	fflush(stdin);
	gets(customer->name);
	
	printf(" Enter contact no: ");
	scanf("%d", &customer->con_num);
	
	printf(" Enter name of book: ");
	fflush(stdin);
	gets(customer->bookname);
	
	printf(" Enter cost of book: ");
	scanf("%f",&customer->price);
	
	printf("\n");
}
void print(record customer)
{
	printf("\n Date : %d/%d/%d \n",customer.payment.year,customer.payment.month,customer.payment.day);
	printf("\n Customer name: %s", customer.name );
	printf("\n Contact No : %d", customer.con_num);
	printf("\n Book Name: %s", customer.bookname);
	printf("\n Book Cost: %.2f", customer.price);

	printf("\n\n");
}
