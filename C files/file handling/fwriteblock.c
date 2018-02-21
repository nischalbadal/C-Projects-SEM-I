#include<stdio.h>
typedef struct {
		char name[80];
		int age;
	}person;

int main()
{
	FILE *fp;
	person friend={"Nischal",4};
	
	fp=fopen("score.txt","a");
	
	fwrite(&friend, sizeof(person),1,fp);
	
	
	fclose(fp);
}
