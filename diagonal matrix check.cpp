#include<stdio.h>
int main()
{
	int a[20][20],f=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("\na[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i!=j)
			{
				if(a[i][j]==0)
					f=1;
			}
		}
	}
	if(f)
		printf("\nIts is a Diagonal Matrix");
	else
		printf("\nIts is a Nondiagonal Matrix");
	return 0;
}
