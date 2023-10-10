#include<stdio.h>
int sum(int);
int main()
{
	int n,r;
	printf("Enter a number=");
	scanf("%d",&n);
	r=sum(n);
	printf("\nThe sum of digit=%d",r);
	return 0;
}
int sum(int x)
{
	if(x==0)
		return 0;
	else
		return (x%10+sum(x/10));
}
