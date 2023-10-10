#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **a,m,n,i,j;
	printf("Enter the number of row & coloumn=");
	scanf("%d%d",&m,&n);
	a=(int **)malloc(m*n*sizeof(int*));
	for(i=0;i<n;i++)
		a[i]=(int *)malloc(n*sizeof(int));
	printf("Enter the matrix=\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				printf("a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe matrix is=\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	return 0;
}
