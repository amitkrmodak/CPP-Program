#include<stdio.h>
int main()
{
	int n,s_even=0,s_odd=0,f=0,r;
	printf("Enter a number=");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		f++;
		if(f%2==0)
			s_even=s_even+r;
		else
			s_odd=s_odd+r;
	}
	printf("\nThe sum of even position is=%d",s_even);
	printf("\nThe sum of odd position is=%d",s_odd);
	return 0;
}
