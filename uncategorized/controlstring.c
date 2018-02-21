
#include<stdio.h>
#include<math.h>

int main()

{
	char fname[50];
	char lname[50];
	int birthyr;
	int age;
	int rollno;
	char section;
	float  percentage;
	printf("Information Input Output program");
	printf("\nEnter your first name: ");
	gets(fname);
	printf("Enter last name: ");
	gets(lname);	
	printf("Enter your Birth year(in AD): ");
	scanf("%d",&birthyr); 
	printf(" Enter your roll no.: ");
	scanf("%d",&rollno);
	printf("Enter your section: ");
	scanf(" %c",&section);
	printf("Enter your +2 agg percentage: ");
	scanf("%f",&percentage);
	
	age=2017-birthyr;
		
	printf("\n your information provided is: \nName %s%s",fname,lname);
	printf("\n Roll no.: %d",rollno);
	printf("\n you are %d years old.",age);
	printf("\n you are in section %c in Class of 2020.",toupper(section));
	printf("\n your +2 percentage: %.2f %",percentage);
	getch(); 
}
	
