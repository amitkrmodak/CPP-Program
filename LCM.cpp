#include<stdio.h>
int lcm (int, int);
int main()
{
	int a,b,l;
	printf("Enter two number=");
	scanf("%d%d",&a,&b);
	l=lcm(a,b);
	printf("\nThe LCM of %d and %d is %d",a,b,l);
	return 0;
}
int lcm(int x,int y)
{
	int max,min,m;
	if(x>y)
		max=x,min=y;
	else
		max=y,min=x;
	m=max;
	while(max%min!=0)
	{
		max=max+m;
	}
	return (max);
}
