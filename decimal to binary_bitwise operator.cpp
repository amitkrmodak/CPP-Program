#include<stdio.h>
int main()
{
	int n,check,temp;
	printf("Enter a number=");
	scanf("%d",&n);
	check=1;
	check=check<<3;
	printf("\nEquivalent binary=");
	for(int i=1;i<=4;i++)
	{
		temp=n&check;
		if(temp>0)
			printf("1");
		else
			printf("0");
		check=check>>1;
	}
	return 0;
}
