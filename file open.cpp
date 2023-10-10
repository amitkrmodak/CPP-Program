#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("input.txt","r");
	if(fp==NULL)
	{
		printf("File opened failed");
		exit(0);
	}
	while(ch=fgetc(fp)!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
