#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
	int a,b,c;
	printf("Enter two range=");
	scanf("%d%d",&a,&c);
	printf("\nThe twin prime in the range are------\n");
	while(a<=c-2)
	{
		b=a+2;
		if(abs(a-b)==2)
		{
			if(prime(a)==1 && prime(b)==1)
			{
				printf("%d-%d\n",a,b);
			}	
		}
		a++;
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
