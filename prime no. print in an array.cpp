#include<stdio.h>
int main()
{
	int a[50],n,i,j=2,c=0,f;
	printf("Enter the size=");
	scanf("%d",&n);
	printf("\nEnter the numbers now-----\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe array is----\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\nThe prime numbers are===\n");
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=2;j<=(a[i]/2);j++)
		{
			if(a[i]%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			printf("%5d",a[i]);
			c++;
		}
	}
	printf("\nThe number of prime number=%d",c);
	return 0;
}
