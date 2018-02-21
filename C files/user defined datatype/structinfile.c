/*
Purpose: To write user defined structure in file and read them and append them in the file.
Author:Nischal Badal
Date:2/27/2017
*/

#include<stdio.h>

#define SIZE 50

typedef struct{
	int book_id;
	char book_name[50];
	char student_name[50];
	char author[50];
	char date[50];
}library;

void read(library*,int);
void print(library,int);

int main()
{
	int i,j=1,num,choice,addrec;

    FILE *ptr_read;
	FILE *ptr_write;

	library reader[SIZE];

	printf("Enter number of records to enter :");
	scanf("%d",&num);
	
	ptr_write=fopen("test.bin","w");

	for(i=0;i<num;i++)
	{
		read(&reader[i],i);
		fwrite(&reader[i], sizeof(library),1,ptr_write);
	}

	fclose(ptr_write);
	
	printf("Add any records ?(Y/N)");
	scanf(" %c",&choice);

	if(toupper(choice)=='Y')
	{
		printf("How many records to add ?");
		scanf("%d",&addrec);

		ptr_write=fopen("test.bin","a");

		for(i=0;i<addrec;i++)
		{
			read(&reader[i],i);
			fwrite(&reader[i], sizeof(library),1,ptr_write);
		}

		fclose(ptr_write);
	}

	ptr_read=fopen("test.bin","r");

	fread(&reader[0], sizeof(library),1,ptr_read);

		while(!feof(ptr_read))
		{
	
			fread(&reader[j],sizeof(library),1,ptr_read);
			j++;
	
		}

		printf("The records entered are: \n");

		for(i=0;i<j-1;i++)
		{
			print(reader[i],i);
	    }

	fclose(ptr_read);
}
void print(library reader,int a)
{
		printf("Record %d \n",a+1);
		printf("Book ID: ");
		printf("%d \n",reader.book_id);
		
		printf("Book Name: ");
		printf("%s \n",reader.book_name);
	
		printf("Student Name: ");
		printf("%s \n",reader.student_name);
	
		printf("Author Name: ");
		printf("%s \n",reader.author);
		
		printf("Date: ");
		printf("%s \n",reader.date);
		
}

void read(library *reader,int a)
{
        a++;
        printf("Record :%d \n",a);
		printf("Enter Book ID: ");
		scanf("%d",&reader->book_id);
		fflush(stdin);
		
		printf("Enter Book Name: ");
		gets(reader->book_name);
		fflush(stdin);
		
		printf("Enter Student Name: ");
		gets(reader->student_name);
		fflush(stdin);
		
		printf("Enter Author Name: ");
		gets(reader->author);
		fflush(stdin);
		
		printf("Enter Todays date: ");
		gets(reader->date);
		
}	

