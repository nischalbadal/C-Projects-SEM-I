#include<stdio.h>

typedef struct {
		char name[80];
		int score;
	}score;
int main()
{
	FILE *fp;
	score record[10];
	int i,j=1,k,temp;
	
		fp=fopen("score.txt","r");
		
			fread(&record[0],sizeof(score),1,fp);
			while(!feof(fp))
			{
				fread(&record[j],sizeof(score),1,fp);
				j++;
			}
		
			for(i=0;i<j-1;i++)
			{
			
				printf("Name :");
				puts(record[i].name);
				printf("\tScore : %d",record[i].score);
				printf("\n ________________________________________________________________________________\n");
			}
			fclose(fp);
}
