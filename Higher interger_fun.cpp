#include<stdio.h>
int amit(float);
int main()
{
	float r,n;
	int x;
	printf("Enter a number=");
	scanf("%f",&n);
	x=n;
	if(n>x)
	{
		r=amit(n);
		printf("Higher Integer=%f",r);
	}
	else
		printf("\nThe number is an integer");
	return 0;
}
int amit(float x)
{
	int a;
	a=x;
	return (++a);
}
