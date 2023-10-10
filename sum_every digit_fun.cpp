#include<stdio.h>
#include<math.h>
int rev(int);
int sum(int,int,int);
int main()
{
	int n,s,r,p;
	printf("Enter a number=");
	scanf("%d",&n);
	r=rev(n);
	printf("\nReverse number is=%d",r);
	printf("\nEnter the power value=");
	scanf("%d",&p);
	s=sum(n,r,p);
	printf("\nThe sum of all=%d",s);
	return 0;
}
int rev(int n)
{
	int y,r;
while(n!=0)
	{
		y=n%10;
		r=r*10+y;
		n=n/10;
	}
	return(r);
}
int sum(int m,int r,int p)
{
	int y,x,s,s_all;
	while(m!=0&&r!=0)
	{
		y=m%10;
		x=r%10;
		s=(pow(y,p)+pow(x,p));
		s_all=s_all+s;
		printf("\n%d^%d+%d^%d=%d",y,p,x,p,s);
		m=m/10;
		r=r/10;
	}
	return (s_all);
}
