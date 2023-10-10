#include<stdio.h>
int prime(int);
int main()
{
	int m,n,r,k;
	printf("Enter the 1st number=");
	scanf("%d",&m);
	printf("Enter the last number=");
	scanf("%d",&n);
	printf("\nThe prime number between the two range are---\n");
	for(k=m;k<=n;k++)
	{
		r=prime(k);
		if(r==0)
			printf("%5d",k);
	}
	return 0;
}
int prime(int j)
{
	int i=2,f=0;
	while(i<=j/2)
	{
		if(j%i==0)
		{
			f=1;
			break;
		}
		i++;
	}
	if(f==0)
		return(0);
	else
		return (1);
}
