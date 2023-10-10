#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,j,s,i,f=0;
	printf("Enter the range=");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("Enter the number----\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	printf("\nThe ascending value is-------\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\nEnter the number you want to scarch=");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
			f=1;
	}
	if(f==1)
		printf("\nThe number is in the list");
	else
		printf("\nThe number is not in the list");
	return 0;
}
