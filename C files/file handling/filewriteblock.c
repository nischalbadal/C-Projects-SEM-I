#include<stdio.h>
typedef struct {
		char name[80];
		int age;
	}person;

int main()
{
	FILE *fp;
	person friend[2];
	int i;
	
	fp=fopen("test.bin","w");
	
	for(i=0;i<2;i++)
	{
		printf("Enter Name: ");
		fflush(stdin);
		gets(friend[i].name);
	
		printf("Enter age");
		scanf("%d",&friend[i].age);
	
		fwrite(&friend[i], sizeof(person),1,fp);


	}

	
	fclose(fp);
}
