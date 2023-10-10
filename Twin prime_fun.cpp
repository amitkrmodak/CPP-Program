#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
	int a,b;
	printf("Enter two number=");
	scanf("%d%d",&a,&b);
	if(abs(a-b)==2)
	{
		if(prime(a)==1 && prime(b)==1)
		{
			printf("\nTwin number");
		}		
		else
		{
			printf("\nNot Twin Prime");
		}
	}
	else
	{
		printf("\nHaving difference more than 2");
	}
	return 0;
}
int prime(int x)
{
	int i=2,f=1;
	while (i<=x/2)
	{
		if(x%i==0)
		{
			f=0;
			break;
		}
		i++;
	}
	return (f);
}
