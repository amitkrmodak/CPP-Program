#include<stdio.h>
#include<stdlib.h>
int p_fact(int);
int even_check(int);
int fact(int);
//int revcheck_palindrom(int);
int magic(int);
int square(int);
int sum_digit(int);
int prime (int);
int reverse (int);
int main()
{
	int max,min,n,i,r,j=0,*arr,d;
	long double s;
	printf("Enter 2 numbers=");
	scanf("%d%d",&r,&d);
	if(r>d)
		max=r,min=d;
	else
		max=d,min=r;
	d=(max-min)+1;
	arr=(int *)malloc(d*sizeof(int));
	printf("\nThe numbers are---------\n");
	while(min<=max)
	{
		arr[j]=min;
		printf("%5d",min);
		min++;
		j++;
	}
	d=j;	
	
	while(1)
	for(j=0;j<=d;j++)
	{
		n=arr[j];
	{
	printf("\nPress 1 for Prime Factorial\n");
	printf("Press 2 for Even and Odd check\n");
	printf("press 3 for Factorial\n");
	printf("Press 4 for Palindrom chaeck\n");
	printf("Press 5 for Magic number check\n");
	printf("Press 6 for Square\n");
	printf("Press 7 for Prime check\n");
	printf("Press 8 for Sum of Digits\n");
	printf("Press 9 for Reverse\n");
	printf("Press 10 for Exit\n");
	printf("Enter your choice for %d=",n);
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			r=p_fact(n);
			break;
		case 2:
			r=even_check(n);
			if(r==1)
				printf("\nThe number is Even");
			else
				printf("\nThe number is ODD");
			break;
		case 3:
			s=fact(n);
			printf("\nThe factorial of the number is=%lf",s);
			break;
		case 4:
			r=reverse(n);
			if(r==n)
				printf("\nThe number is Palindrom");
			else
				printf("\nThe number is Not Palindrom");
			break;
		case 5:
			r=magic(n);
			if(r==1)
				printf("\nThe number is a magic number");
			else
				printf("\nThe number is not a magic number");
			break;
		case 6:
			r=square (n);
			printf("\nThe square of the number is %d",r);
			break;
		case 7:
			r=prime(n);
			if(r==1)
				printf("\nThe number is not prime");
			else
				printf("\nThe number is not prime");
			break;
		case 8:
			r=sum_digit(n);
			printf("\nThe Sum of Digit of the number is %d",r);
			break;
		case 9:
			r=reverse(n);
			break;
		case 10:
			exit(1);
			break;
		default:
			printf("\nError,You enter wrong number.....Try Again");
	}
	printf("\n--------------------\n");
	}
	}
	return 0;
}
int p_fact(int n)
{
	int i=2;
	printf("\nThe Prime factorial of %d are------\n",n);
	while(n>1)
	{
		if(n%i==0)
		{
			printf("%5d",i);
			n=n/i;
		}
		else
		{
			i++;
		}
	}
	return 0;
}
int even_check (int x)
{
	int s=0;
	if(x%2==0)
	{
		s=1;
	}
	return(s);
}
int fact (int a)
{
	int i;
	long double f=1;
	for(i=2;i<=a;i++);
	{
		f=f*i;
	}
	return (f);
}
int magic(int b)
{
	int r;
	while(b>9)
	{
		r=sum_digit(b);
		b=r;
	}
	return (r);
}
int square (int b)
{
	b=b*b;
	return (b);
}
int sum_digit (int m)
{
	int r=0,n;
	while(m>0)
	{
		n=m%10;
		r=r+n;
		m=m/10;
	}
	return (r);
}
int prime(int n)
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
int reverse(int j)
{
	int r=0,a;
	while(j!=0)
	{
		a=j%10;
		r=r*10+a;
		j=j/10;
	}
	return (j);
}
