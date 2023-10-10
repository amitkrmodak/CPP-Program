#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
main()
{
	char ch;
	int j;
	printf("Enter a character==");
	ch=getchar();
	j=isdigit(ch);
	printf("J=%d",j);
	if(j=isalpha(ch)>0)
		printf("letter j=%d",j);
	else
		if(j=isdigit(ch)>0)
			printf("Digit j=%d",j);
		else
			printf("Alphanumeric j=%d",j);
}
