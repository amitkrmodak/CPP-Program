#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp1,*fp2;
	int f=1;
	char ch1,ch2;
	/*if(argc!=3)
	{
		printf("Inavlid arument of command line");
		exit(0);
	}*/
	fp1=fopen("input.txt","w");
	fp2=fopen("output.txt","w");
	fp1=fopen("input.txt","r");
	fp2=fopen("output.txt","r");
	if(fp1==NULL||fp2==NULL)
	{
		printf("File open failed");
		exit(0);
	}
	while((ch1=fgetc(fp1)!=EOF)||(ch2=fgetc(fp2)!=EOF))
	{
		if(ch1!=ch2)
		{
			f=0;
			break;
		}
	}
	if(f)
		printf("Identical");
	else
		printf("Not Identical");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
