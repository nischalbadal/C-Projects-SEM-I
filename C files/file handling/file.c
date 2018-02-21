
#include<stdio.h>

typedef struct{
	int id;
	char first_name[50];
	char last_name[50];
}record;

void readrec(record*);
void printrec(record);

int main()
{
	int i,j=1,choice;
    FILE *fp_read;
	FILE *fp_write;
	record student[50];


	fp_write=fopen("name.txt","w");
	for(i=0;i<2;i++)
	{
		readrec(&student[i]);
		fwrite(&student[i], sizeof(record),1,fp_write);
	}
	fclose(fp_write);
	
	
	fp_read=fopen("name.txt","r");
	fread(&student[0], sizeof(record),1,fp_read);

		while(!feof(fp_read))
		{
	
			fread(&student[j],sizeof(record),1,fp_read);
			j++;
	
		}
		for(i=0;i<j-1;i++)
		{
			printrec(student[i]);
	    }
	fclose(fp_read);
}
void readrec(record *student)
{

		printf("Student ID: ");
		scanf("%d",&student->id);
		fflush(stdin);
		
		printf("Enter Student 1st Name: ");
		scanf("%s",&student->first_name);
		fflush(stdin);
		
		printf("Enter Student last Name: ");
		scanf("%s",&student->last_name);
		fflush(stdin);
		
}	

void printrec(record student  )
{		
	   
		printf("Student ID: ");
		printf("%d \n",student.id);
		
		printf("Student 1st Name: ");
		printf("%s \n",student.first_name);
	
		printf("Student last Name: ");
		printf("%s \n",student.last_name);
	
	
}


