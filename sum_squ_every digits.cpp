#include<stdio.h>
#include<math.h>
int main()
{
	int n,r=0,y,p,m,s,x,s_all=0;
	printf("Enter a number=");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		y=n%10;
		r=r*10+y;
		n=n/10;
	}
	printf("\nThe reverse of the number is=%d",r);
	printf("\nEnter the power value=");
	scanf("%d",&p);
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
	printf("\nThe sum of all is %d",s_all);
	return 0;
}
