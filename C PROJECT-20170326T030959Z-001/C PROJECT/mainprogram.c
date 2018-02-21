#include<stdio.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#define SIZE 100

typedef struct
{
	int index;
	char question[SIZE];
	char option1[SIZE];
	char option2[SIZE];
	char option3[SIZE];
	char option4[SIZE];
	char answer;
}quiz;
typedef struct {
		char name[80];
		int score;
	}score;


void read(quiz *);

void ans(quiz  *, int*, int*);

int main()
{
	FILE *fp;
	quiz ques[SIZE];
	int i=1,count=0,num,j=0,temp,tscore=0;
	int lives=3;
	time_t t;
	int r_num[10];
	score record;

	printf("\t____________---------------------IQ TEST: MINISTRY OF EDUCATION------------------___________________\n\n");

	printf("________________________________________________________________________________\n\n");
	printf("General knowledge for development. Test your precedence for job opportunities.\n");
	printf("________________________________________________________________________________\n\n\n");
	printf("Instructions:\n ");
	printf("\t1) Read the questions carefully.");
	printf("\t\t2) Select the correct option.");
	printf("\n");
	printf("\t3) You are given three lives. Each life gets deducted once a wrong answer is entered. \n");
	printf("\tOnce the lives are over, the game terminates. Good luck! :)");
	printf("\n\nPress enter to start the quiz....\n");
    getch();
    printf("________________________________________________________________________________\n\n");
    
   
	fp=fopen("question.txt","r");

    fread(&ques[0],sizeof(quiz),1,fp);
	while(!feof(fp))
	{
		fread(&ques[i],sizeof(quiz),1,fp);
		i++;
	}

	srand((unsigned) time(&t));

	for(count=0; count<10; count++)
	    {
			r_num[count]= rand()%25 + 1;

		}

	for(j=0;j<10;j++)
	{
   
      	temp=r_num[j];
		

	    read(&ques[temp]);

		ans(&ques[temp],&lives,&tscore);
		
		printf("\nYour score is %d\n",tscore);
		printf("\nlife remaining: %d \n",lives);
		printf("________________________________________________________________________________\n\n");

		
		
		 if(lives==0)
		{
		
			printf("Your lives are over. Better luck next time. :)\n");
			printf("________________________________________________________________________________\n\n");
			break;
		}
		
	
	    
		j++;
	}
	
	if(tscore==10)
	{
		printf("Congratulations! You've aced the game!");
	}
	else{
		printf("Your final score is %d!\n",tscore);
		printf("________________________________________________________________________________\n");
	}
	
	fclose(fp);
	
	fp=fopen("score.txt","a");
	
	printf("\n");

	printf("Enter your name : ");
	fflush(stdin);
	
	gets(record.name);
	
	record.score=tscore;
	
	fwrite(&record,sizeof(score),1,fp);
	printf("Record Entered Successfully.");
	fclose(fp);
	
	
	
}

void read(quiz *quest)
{
	
    puts(quest->question);
    printf("\n");
		
    printf("option A: ");
    fflush(stdin);
	puts(quest->option1);
		
    printf("option B: ");
    fflush(stdin);
	puts(quest->option2);
		
	printf("option C: ");
	fflush(stdin);
	puts(quest->option3);
		
	printf("option D: ");
	fflush(stdin);
	puts(quest->option4);
	
	
}

void ans(quiz *answ, int *life, int *score)
{
	char user_choice,count;


	printf("\n Your answer: ");
	scanf("%c",&user_choice);
		    
    if(answ->answer==toupper(user_choice))
	{	printf("\n Correct answer! \n");
		
		*score=*score+1;
	}
	
	
	else
	{
		printf("\nWrong answer! \n");
		printf("\nThe answer is: ");
	   putchar(answ->answer);
	   printf("\n");
	   *life=*life-1;   	
	}
	 	
}
