/*fibonacci series with function(no return )*/
#include<stdio.h>
int term (int);
int cal (int);
int main()
{
	int i,n,r;
	printf("Enter the number of terms=");
	scanf("%d",&n);
	int term (n);
	int cal (n);
	return 0;
}
int term (int x)
{
	int j;
	printf("The terms are-------\n");
	for(j=0;j<x;j++)
	{
		printf("%6d",j);
	}
	return 0;
}
int cal (int a)
{
	int f,i=2,s,p=0,n=1;
	printf("The series is-----\n");
	printf("%6d%6d",p,n);
	while(i<=a)
	{
		s=p+n;
		f=p;
		p=n;
		n=f;
		printf("%6d",s);
		i++;
	}
}
