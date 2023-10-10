#include<stdio.h>
int hcf(int ,int);
int main()
{
	int a,b,t,r;
	printf("Enter two numbers=");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	r=hcf(a,b);
	printf("\nThe H.C.F of %d and %d is %d",a,b,r);
	return 0;
}
int hcf( int x, int y)
{
	int m;
	if(x==y)
	{
		m=x;
	}
	else
	{
		m=y/2;
		while (m>0)
		{
			if(x%m==0&&y%m==0)
			{	
				break;
			}
			m--;
		}
	}
	return(m);
}
