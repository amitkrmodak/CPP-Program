#include<stdio.h>
int even(int);
int odd (int);
int main()
{
	int n,r,f=0,s1,s2;
	printf("Enter a number=");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		f++;
		if(f%2==0)
			s1=even(r);
		else
			s2=odd(r);
	}
	printf("\nThe sum of even position is=%d",s1);
	printf("\nThe sum of odd position is=%d",s2);	
}
int even (int x)
{
	int s=0;
	s=s+x;
	return (s);
}
int odd(int y)
{
	int s=0;
	s=s+y;
	return (s);
}
