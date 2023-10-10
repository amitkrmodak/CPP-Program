#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[20];
	int i,l=0,u=0,n=0,s=0;
	printf("Enter a string=");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&&str[i]<='9')
			n++;
		else if(str[i]>='A'&&str[i]<='Z')
			u++;
		else if(str[i]>='a'&&str[i]<='z')
			l++;
		else
			s++;
	}
	printf("\nThe integer number=%d",n);
	printf("\nThe upper case latter=%d",u);
	printf("\nThe lower case letter=%d",l);
	printf("\nThe special case chracter=%d",s);
	return 0;
}
