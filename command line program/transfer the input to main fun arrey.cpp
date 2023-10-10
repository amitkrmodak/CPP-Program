#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
	int i,*arr;
	arr=(int *)malloc((argc-1)*sizeof(int));
	for(i=0;i<argc-1;i++)
	{
		arr[i]= atoi(argv[i+1]);
	}
	printf("The numbers in arrey is---\n");
	for(i=0;i<argc-1;i++)
		printf("%d ",arr[i]);
}
