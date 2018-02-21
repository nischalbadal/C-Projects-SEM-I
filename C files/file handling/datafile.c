#include<stdio.h>

int main()
{
	FILE *fp;
	int age;
	char name[80];
	
	fp=fopen("test.bin","r");
	
	fscanf(fp,"%s",name);
	fscanf(fp,"%d",&age);
	
	printf("%s",name);
	printf("%d",age);
	
	fclose(fp);
}
