#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[20],str1[20];
	int j,i;
	printf("Enter a string=");
	gets(str);
	while(1)
	{
		printf("\nPress 1 for Encrypt form");
		printf("\nPress 2 for Decrypt form");
		printf("\nPress 3 for exit");
		printf("\nEnter a choice=");
		scanf("%d",&j);
		switch(j)
		{
			case 1:
				for(i=0;str[i]!='\0';i++)
				{
					str[i]=(str[i]+1);
				}
				printf("\nEncrypt form is--------\n");
				puts(str);
				break;
			case 2:
				for(i=0;str[i]!='\0';i++)
				{
					str[i]=(str[i]-1);
				}
				printf("\nDecrypt form is--------\n");
				puts(str);
				break;
			case 3:
				exit(1);
				break;
			defauli:
				printf("Error,Try Again");
				break;
		}
	}
	return 0;
}
