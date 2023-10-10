#include<stdio.h>
int main()
{
	int n,y;
	printf("Enter a number=");
	scanf("%d",&n);
	while(n!=0)
	{
		y=n%10;
		if(y%2==0)
			printf("\n%d is a Even number",y);
		else
			printf("\n%d is a Odd number",y);
		n=n/10;
	}
	return 0;
}
