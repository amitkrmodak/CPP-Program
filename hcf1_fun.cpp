#include<stdio.h>
int hcf(int, int);
int main()
{
	int a,r,b;
	printf("Enter two numbers=");
	scanf("%d%d",&a,&b);
	r=hcf(a,b);
	printf("H.C.F of %d and %d=%d",a,b,r);
	return 0;
}
int hcf(int a,int b)
{
	int max,min,mid;
	if(a>b)
		max=a,min=b;
	else if(b>a)
		max=b,min=a;
	else
	{
		mid=a;
		goto check;	
	}
	for(mid=min/2;mid>0;mid--)
	{
		if(max%mid==0&&min%mid==0)
		{
			break;
		}
	}
	check:
	return (mid);
}
