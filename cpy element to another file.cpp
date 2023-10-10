#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("input.txt","r");
	fp2=fopen("output.txt","w");
	if(fp1==NULL)
	{
		printf("File open failed");
		exit(0);
	}
	while(ch=fgetc(fp1)!=EOF)
	{
		putc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
