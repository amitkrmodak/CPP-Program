#include<stdio.h>
int reverse(int);
int prime(int);
int main()
{
	int max,min,i,j,rev,p,a,b,c=0;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	if(a>b)
		max=a,min=b;
	else
		max=b,min=a;
	printf("\nThe reverse prime---------\n");
	for(i=min;i<=max;i++)
	{
		rev=reverse(i);
		p=prime(rev);
		if(p==rev)
		{
			c++;
			printf("%5d",p);
		}
	}
	printf("\nThe number of prime number=%d",c);
	return 0;
}
int reverse(int n){
	int rev=0;
	while(n>0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	return rev;
}
int prime(int n)
{
	int j,r;
	for(j=2;j<=n;j++)
	{
		if(n%j==0)
			break;
	}
	return (j);
}
