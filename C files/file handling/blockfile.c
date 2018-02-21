#include<stdio.h>
typedef struct {
		char name[80];
		int age;
	}person;

int main()
{
	FILE *fp;
	person friend;
	
	fp=fopen("test.bin","r");
	
	fread(&friend, sizeof(person),1,fp);
	
	printf("%s",friend.name);
	printf("%d",friend.age);
	
	fclose(fp);
}
