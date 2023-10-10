#include<stdio.h>
int main()
{
	int i,j,a[20];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==2&&j==2)
				printf("0");
			else
				printf("S");
		}
		printf("\n");
	}
	return 0;
}
