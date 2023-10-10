#include<stdio.h>
#include<stdlib.h>
int max (int a[],int);
int main()
{
	int *a,n,r;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nEnter the elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	r=max (a,n);
	printf("\nMAX=%d",r);
	return 0;
}
int max(int a[],int n)
{
	int m;
	m=a[0];
	for(int j=1;j<n;j++)
	{
		if(m<a[j])
			m=a[j];
	}
	return (m);
}
