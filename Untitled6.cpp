#include<stdio.h>
int main()
{
	int i,a[100],n,b,c=0;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	printf("Enter the numbers=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The numbers are=");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\nEnter the number for scarch=");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		c++;
		if(a[i]==b)
		{
			printf("\nThe number is in the list");
			printf("\nThe position of %d is=%d",b,c);
			break;
		}
	}
	if(i==n)
	{
		printf("\nThe number is not in list");
	}
	return 0;
}
