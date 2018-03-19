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
	int cid;
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
	int i,j,choice,res,rec_count=0, id;
	int cid;
	FILE *fp;
	FILE *FP_PTR;
	
	date id_srch;	
	record new_record[SIZE];
	

		

	do{
		printf("\t************** WELCOME TO THE LIBRARY *************\n");
		printf("\n Press<1> to add entry");
		printf("\n Press<2> to display entry");
		printf("\n Press<3> to edit any entry");
		printf("\n Press<4> to delete an entry");
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
					
					for(i=0;i<j-1;i++)
					{
							
								printf("\nThe Records are:");
								print(new_record[i]);
								rec_count=1;
							
					
						if(rec_count==0)
						{
							printf("  No Records on File \n");
						}
						
						printf("\n Press any key to continue...\n");
						getch();
						system("cls");
						
						break;
			
					}
				}
			case 3:{
					fp=fopen("test.bin","r");
						fread(&new_record[0],sizeof(record),1,fp);
						j=1;
						
						while(!feof(fp))
						{

							fread(&new_record[j],sizeof(record),1,fp);
							j++;
						
						}
						fclose(fp);
						
						
						printf("\n Enter Date to edit entries on (YYYY/MM/DD): ");
						scanf("%d/%d/%d",&id_srch.year,&id_srch.month,&id_srch.day);
						
						FP_PTR=fopen("temp.txt","w");
						for(i=0;i<j-1;i++)
						{
							if((id_srch.year==new_record[i].payment.year) && (id_srch.month==new_record[i].payment.month) && (id_srch.day==new_record[i].payment.day))
							{
								printf("\nThe Records are:");
								print(new_record[i]);
								printf("Press any key to edit...");
								getch();
								read(&new_record[i]);
								fwrite(&new_record[i],sizeof(record),1,FP_PTR);
							
							}
							else{
								fwrite(&new_record[i],sizeof(record),1,FP_PTR);
							}
						}
							system("cls");
					for(i=0;i<j-1;i++)
					{
								printf("\nThe Edited record(s) are:");
								print(new_record[i]);
								rec_count=1;
							}
		
				fclose(FP_PTR);
					remove("test.bin");
					rename("temp.txt","test.bin");
					getch();
						system("cls");
				
				break;
			}
			case 4:{
				fp=fopen("test.bin","r");
						fread(&new_record[0],sizeof(record),1,fp);
						j=1;
						
						while(!feof(fp))
						{

							fread(&new_record[j],sizeof(record),1,fp);
							j++;
						
						}
						fclose(fp);
						remove("test.bin");
						
						printf("\n Enter customer id to delete entries  ");
						scanf("%d", &cid);

						
						FP_PTR=fopen("temp.txt","w");
						for(i=0;i<j-1;i++)
						{
							if(cid==new_record[i].cid) 
							{
								printf("\nThe Records are:");
								print(new_record[i]);
								printf("Press any key to delete...");
								getch();
								printf("Record Deleted Successfully.");
							
							}
							else{
								fwrite(&new_record[i],sizeof(record),1,FP_PTR);
							}
						}
							system("cls");		
					fclose(FP_PTR);
					rename("temp.txt","test.bin");
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
	printf(" Enter student id: ");
	scanf("%d", &customer->cid);
	
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
	printf("\n customer id : %d", customer.cid);
	printf("\n Date : %d/%d/%d \n",customer.payment.year,customer.payment.month,customer.payment.day);
	printf("\n Customer name: %s", customer.name );
	printf("\n Contact No : %d", customer.con_num);
	printf("\n Book Name: %s", customer.bookname);
	printf("\n Book Cost: %.2f", customer.price);

	printf("\n\n");
}
