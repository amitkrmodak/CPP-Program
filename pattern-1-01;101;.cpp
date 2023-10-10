/*1
01
101
0101
10101*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if((i+j)%2==0)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
}
