#include<stdio.h>
int main()
{
	int n,b=2,flag,m;
	printf("Enter a number=");
	scanf("%d",&n);
	m=n;
	while(b<=n/2)
	{
		if(n%b==0)
		{
			flag=3;
			break;
		}
		b++;
	}
	if(flag==3)
		printf("%d is not a prime number",m);
	else
		printf("%d is a prime number",m);
	return 0;
}
