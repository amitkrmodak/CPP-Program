#include<stdio.h>
#include<stdlib.h>
int even(int);
int prime(int);
int fact (int);
int main()
{
	int n,i,x,y,z,j;
	printf("Enter a number=");
	scanf("%d",&n);
	printf("For even odd checking press 1");
	printf("\nFor prime checking press 2");
	printf("\nFor factorial checking press 3");
	printf("\nFor exit press 4");
	printf("\nEnter your choice=");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			x=even(n);
			if(x==1)
				printf("Even");
			else
				printf("Odd");
			break;
		case 2:
			y=prime(n);
			if(y==0)
				printf("Prime");
			else
				printf("Not Prime");
				break;
		case 3:
			z=fact(n);
			printf("\nThe factorial of %d is=%d",n,z);
			break;
		case 4:
			exit(1);
		default:
			printf("\nError");
	}
	return 0;
}
int even (int n)
{
	int f=0;
	if(n%2==0)
	{
		f=1;
	}
	return (f);
}
int prime (int n)
{
	int i=2,f=0;
	while(i<=n/2)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
		i++;
	}
	return (f);
}
int fact(int n)
{
	int i,f=1;
	for(i=2;i<=n;i++)
	{
		f=f*i;
	}
	return (f);
}
