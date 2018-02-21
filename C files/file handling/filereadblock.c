#include<stdio.h>
typedef struct {
		char name[80];
		int age;
	}person;

int main()
{
	FILE *fp;
	person friend[2];
	int i=1,j;
	
	fp=fopen("test.bin","r");
	if(fp ==0)
		printf("File does not exist");

	fread(&friend[0], sizeof(person),1,fp);

	while(!feof(fp))
	{
	
		fread(&friend[i],sizeof(person),1,fp);
		i++;
	
	}
	
	for(j=0;j<i-1;j++)
	{
		printf("\n Name: ");
		puts(friend[j].name);
		printf("%d",friend[j].age);
    }

	
	fclose(fp);
}
