#include<stdio.h>
int prime(int ,int);
int main()
{
	int n,m,p;
	printf("Enter a number=");
	scanf("%d",&n);
	m=prime(n,2);
	if(m==1)
		printf("Prime");
	else
		printf("Not Prime");
	return 0;
}
int prime(int a,int i)
{
	if(i==a/2)
		return 1;
	else 
	{
		while(i<=a/2)
		{
			if(a%i==0)
				return 0;
			else
				return prime(a,i++);
		}
	}
}
