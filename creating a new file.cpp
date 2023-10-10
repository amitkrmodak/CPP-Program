#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1;
	int roll,marks,i;
	char name[20],filename[5];
	printf("Enter the file name=");
	gets(filename);
	f1=fopen(filename,"w");
	printf("Enter data into file--\n");
	printf("\nEnter name - roll - marks:");
	for(i=0;i<3;i++)
	{
		fscanf(stdin,"%s %d %d",name,&roll,&marks);
		printf("\n Name   Roll   Marks:");
		fprintf(stdout,"%5s  %5d  %5d",name,roll,marks);
	}
	fclose(f1);
	return 0;
}
