#include<stdio.h>
char readchar();
int main()
{
	printf("%c",readchar());
	
}
char readchar()
{
	char ch;
	ch=getchar();	
	if(ch=='\n')
	putchar(ch);
	return readchar();
}
