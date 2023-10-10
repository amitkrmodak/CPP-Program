#include<stdio.h>
int main()
{
	int i,j,r,c,a[100][100];
	printf("Enter the number of row=");
	scanf("%d",&r);
	/*printf("\nEnter the number of column=");
	scanf("%d",&c);*/
	printf("\nEnter the value\n");
	for(i=1;i<=r;i++)
	{
		for(j=0;j<=i;j++)
		{
			scanf("%d%d",&a[i][j]);
		}
	}
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d%d",a[i][j]);
		}
	}
	return 0;
}
