#include<stdio.h>
#include<math.h>
int main()
{
	int p,i,n,s=1,x;
	printf("Enter the value->");
	scanf("%d",&x);
	printf("\nEnter the range->");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		p=pow(x,i);
		s=s+p;
	}
	printf("SUM=%d",s);
	return 0;
}
