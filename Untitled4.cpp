#include<stdio.h>
void sum(int,int);
int *n,a,b,s,*m;
int main()
{
	int a,b,s;
	m=&a,n=&b;
	a=10,b=20;
	sum(*m,*n);
	//printf("Result=%d",s);
	printf("\n%d%d",a,b);
	return 0;
}
void sum(int *m,int *n)
{
	int *z;
	*z=*m+*n;
	
	printf("\nZ=%d",*z);
	//return(0);
}
