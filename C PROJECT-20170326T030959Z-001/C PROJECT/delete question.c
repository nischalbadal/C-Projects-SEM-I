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
	int i,j=1,choice;
	
	fp=fopen("question.txt","r");

    fread(&ques[0],sizeof(quiz),1,fp);
	while(!feof(fp))
	{
		fread(&ques[j],sizeof(quiz),1,fp);
		j++;
		
	}
	fclose(fp);
	
	printf("The Questions Are: \n");
	for(i=0;i<j-1;i++)
	{
		printf("Index: %d \n",ques[i].index);
		printf("Question: %s \n",ques[i].question);
		printf("Option A: %s \n",ques[i].option1);
		printf("Option B: %s \n",ques[i].option2);
		printf("Option C: %s \n",ques[i].option3);	
		printf("Option D: %s \n",ques[i].option4);
		printf("Answer is: %c",toupper(ques[i].answer));
		printf("\n \n");
	}
	
	printf("Enter Index to delete: ");
	scanf("%d",&choice);

	fp=fopen("question.txt","w");
	
	for(i=0;i<j-1;i++)
	{
		if( ques[i].index==choice)
			{
				printf("Index %d Deleted.",choice);
			}
		else
			{
			fwrite(&ques[i],sizeof(quiz),1,fp);
			}
	
	}
	fclose(fp);	
	fopen("question.txt","r");
	j=1;
	
	fread(&ques[0],sizeof(quiz),1,fp);
	while(!feof(fp))
	{
		fread(&ques[j],sizeof(quiz),1,fp);
		j++;
		
	}
	fclose(fp);
	printf("The Questions Are: \n");
	for(i=0;i<j-1;i++)
	{
		printf("Index: %d \n",ques[i].index);
		printf("Question: %s \n",ques[i].question);
		printf("Option A: %s \n",ques[i].option1);
		printf("Option B: %s \n",ques[i].option2);
		printf("Option C: %s \n",ques[i].option3);	
		printf("Option D: %s \n",ques[i].option4);
		printf("Answer is: %c \n",toupper(ques[i].answer));
		printf("\n ");
	}
	
getch();
}
