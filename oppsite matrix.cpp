#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[20][20],n,m,i,j;
	printf("Enter row and coloumn of the matix=");
	scanf("%d%d",&m,&n);
	printf("\n Enter array elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\nThe matrix is------\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nThe opposite matrix is----\n");
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
