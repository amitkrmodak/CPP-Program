#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,n,s=0;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nThe elements are--\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe prime numbers are----\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%5d",a[i]);
			s=s+a[i];
		}
	}
	printf("\nThe sum of even numbers=%d",s);
	return 0;
}
