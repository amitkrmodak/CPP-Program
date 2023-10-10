#include<stdio.h>
#include<stdlib.h>
int prime(int);
int main()
{
	int n,*a,i,r,c=0;
	printf("\nEnter the number of elements=");
	scanf("%d",&n);
	a=(int *)malloc(n* sizeof(int));
	printf("\nEnter the elements-------\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe elemnts are------\n");
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
	printf("\nThe prime numbers are-------\n");
	for(i=0;i<n;i++)
	{
		r=prime(a[i]);
		if(a[i]==r)
		{
			c++;
			printf("%5d",r);
		}
	}
	printf("\nThe number of prime number=%d",c);
	return 0;
}
int prime(int a)
{
	int b=2;
	while(b<=a)
	{
		if(a%b==0)
		{
			break;
		}
		b++;
	}
	return b;
}
