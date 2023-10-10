#include<stdio.h>
int rev(int ,int);
int main()
{
	int n,r=0,m;
	printf("Enter a number=");
	scanf("%d",&n);
	m=rev(n,r);
	printf("The reverse of %d is %d",n,m);
	return 0;
}
int rev(int a,int r)
{
	if(a==0)
		return r;
	else
		return rev(a/10,r*10+a%10);
}
