#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
	int a,b,c;
	if(argc!=3)
	{
		printf("Invalid input");
		exit(0);
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=a+b;
	printf("SUM=%d",c);
}
