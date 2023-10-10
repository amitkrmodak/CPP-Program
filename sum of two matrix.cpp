#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],s[20][20],i,j,m,n,x,y;
	printf("Enter the row and coloumn of the 1st Matrix=");
	scanf("%d%d",&m,&n);
	printf("\nEnter the 1st matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The 1st matrix is------\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the row and coloumn of the 2nd Matrix=");
	scanf("%d%d",&x,&y);
	printf("\nEnter the 2nd matrix");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("The 2nd matrix is----\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	if(m==x&&n==y)
	{
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
				s[i][j]=a[i][j]+b[i][j];
				printf("%d\t",s[i][j]);
			}
		}
	}
	else
	{
		printf("The row and coloumn of the two matrix are not same");
	}
	return 0;
}
