#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,j,t;
	printf("Enter arrey size=");
	scanf("%d",&n);
	j=n-1;
	a=(int *)malloc(n*sizeof(int));
	printf("\nEnter the arrey elements------\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		j--;
	}
	printf("\nAfter swap arrey elements are-----\n");
	for(int i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	return 0;
}
