#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
main()
{
	char ch;
	int j;
	printf("Enter a character==");
	ch=getchar();
	if(islower(ch))
	{
		printf("\nThe letter is lower case");
		putchar(toupper(ch));
	}
	else
	{
		printf("\nTheletter is upper case");
		putchar(tolower(ch));
	}
		
}
