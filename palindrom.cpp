#include<stdio.h>
int main()
{
	int n,m,rev=0;
	printf("Enter a number=");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	if(m==rev)
		printf("%d is a palindrom number",m);
	else
		printf("%d is not a palindrom number",m);
	return 0;
}
