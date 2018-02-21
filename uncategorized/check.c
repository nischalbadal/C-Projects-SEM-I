
#include<stdio.h>
int main()
{
	char text[200];
	int vowel_count=0;
	int cons_count=0;
	int i, count;
	
	printf("Enter any string: ");
	gets(text);
	i=0;
    printf("%s",text);
	
	while(text[i]!='\0')
	{  
	   if((text[i]=='a')||(text[i]=='e')||(text[i]=='i')||(text[i]=='o')||(text[i]=='u'))
		{ 
			vowel_count++;
			
		}
		else 
		{
			cons_count++;
			
		}
		count++;
	    i++;	
       }
	printf("\n Count of vowel is %d",vowel_count);
	printf("\n Count of consonant is %d",cons_count);
	
	}
	
 

