#include<stdio.h>
typedef struct {
		char name[80];
		int age;
	}person;

int main()
{
	FILE *fp;
	int age;
	char name[80];
	
	fp=fopen("test.bin","w");
	
	gets(name);
	scanf("%d",&age);
	
	fprintf(fp,"%s",name);
	fprintf(fp,"\n %d",&age);
	
	
	fclose(fp);
}
