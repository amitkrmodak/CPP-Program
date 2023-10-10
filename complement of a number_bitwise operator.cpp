#include<stdio.h>
void d2b(int);
main()
{
	int a,c;
	printf("Enter a number=");
	scanf("%d",&a);
	d2b(a);
	c=~a;
	d2b(c);
	printf("\nComplement of %d is=%d",a,c);
}
void d2b(int n)
{
	int check,temp;
	check=1;
	check=check<<15;
	printf("\nEquivalent binary of %d is=",n);
	for(int i=1;i<=16;i++)
	{
		temp=n&check;
		if(temp>0)
			printf("1");
		else
			printf("0");
		check=check>>1;
	}
}
