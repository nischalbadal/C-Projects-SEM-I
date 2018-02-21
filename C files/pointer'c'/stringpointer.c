# include <stdio.h>

void string(char[], int *, int *, int *, int *);
int main()
{
	char str[80];
	int ch=0, digit=0, wspc=0, spchar= 0;
	
	printf ("Enter any string: ");
	gets(str);
	
	string(str, &ch, &digit, &wspc, &spchar);
	
	printf ("No of characters %d\n", ch);
	printf ("No of digits %d\n", digit);
	printf ("No of whitespces  %d\n", wspc);
	printf ("No of special characters  %d\n",spchar);
} 
void string(char str[], int *ch, int *digit, int *wspc, int *spchar)
{
	int count = 0;
	char c;
	while ((c= toupper(str[count])) != '\0'){
		
		if(c>='A' && c<='Z')
			*ch = *ch + 1;
		
		
		else if(c>='0' && c<='9')
			*digit = *digit + 1;
		
		
			else if(c== ' ' || c== '\t')
				*wspc = *wspc + 1;
		
		
				else
					*spchar = *spchar + 1;
		
		count += 1;
	}
	}

