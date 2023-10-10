#include<stdio.h>
int main()
{
	int i,j,s[20][20],a[20][20],k,m,n,x;
	printf("Enter the number of matrix=");
	scanf("%d",&x);
	printf("\nEnter the row and coloumn of %d matrix=",x);
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			s[i][j]=0;			
		}
	}
	for(k=1;k<=x;k++)
	{
		printf("Enter the value of %d matrix=\n",k);	
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				s[i][j]=s[i][j]+a[i][j];
			}
		}
		printf("\nThe %d matrix is---\n",k);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]);
				
			}
			printf("\n");
		}
		printf("\n------------\n");
	}
	printf("\nThe sum of the matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}
