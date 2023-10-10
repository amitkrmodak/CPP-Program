#include<stdio.h>
int main()
{
	int c=0,s=0,n;
	printf("Enter 10 numbers=");
	check:
		c++;
		if(c<=10)
		{
			scanf("%d",&n);
			s=s+n;
			goto check;
		}
		printf("SUM=%d",s);
		return 0;
}
	

