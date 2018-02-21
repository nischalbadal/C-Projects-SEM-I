#include<stdio.h>
typedef struct
{
	int index;
	char question[100];
	char option1[100];
	char option2[100];
	char option3[100];
	char option4[100];
	char answer;
}quiz;
int main()
{
	FILE *fp;
	quiz ques[100];
	int i,j=0,choice;
	
		fp=fopen("question.txt","r");

    fread(&ques[0],sizeof(quiz),1,fp);
	while(!feof(fp))
	{
		fread(&ques[j],sizeof(quiz),1,fp);
		j++;
		
	}
	fclose(fp);
	
	printf("There are %d records in file.\n",j);
	

	
	printf("How many questions to add ?");
	scanf("%d",&choice);
	
	fp=fopen("question.txt","a");
	
	for(i=0;i<choice;i++)
	{
		printf("Enter Index: ");
		scanf("%d",&ques[i].index);
	
		printf("Enter Question: ");
		fflush(stdin);
		gets(ques[i].question);
		
		printf("Enter option A: ");
		gets(ques[i].option1);
		
		printf("Enter option B: ");
		gets(ques[i].option2);
		
		printf("Enter option C: ");
		gets(ques[i].option3);
		
		printf("Enter option D: ");
		gets(ques[i].option4);
	
		printf("Answer is (A/B/C/D)?");
		scanf("%c",&ques[i].answer);
	
		fwrite(&ques[i],sizeof(quiz),1,fp);
		j++;
	}
	printf("Question added to file  successfully.");
	fclose(fp);
}
