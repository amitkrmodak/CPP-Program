#include<stdio.h>
int main()
{
	int a[100],s,c=0,n,i;
	printf("\nEnter the number of elements=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\nEnter the number you want to scarch=");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		c++;
		if(a[i]==s)
		{
			printf("\nThe number is in the list");
			printf("\nThe position of the number is=%d",c);
			break;
		}
	}
	if(i==n)
	{
		printf("\nThe number is not in the list");
	}
	return 0;
}
