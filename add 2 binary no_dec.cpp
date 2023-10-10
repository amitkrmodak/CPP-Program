#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void b_check(char []);
int b2d_convert(char []);
void getdata(char []);
void d2b_convert(int);
int c;
int main()
{
	char m[20],n[20];
	int a,b;
	printf("Enter 1st binary number=");
	getdata(m);
	printf("Enter 2nd binary number=");
	getdata(n);
	a=b2d_convert(m);
	b=b2d_convert(n);
	a=a+b;
	printf("\nThe addition of these binary numbers=\n");
	d2b_convert(a);
	return 0;
}
void getdata( char a[])
{
	fflush(stdin);
	gets(a);
	b_check(a);
}
void b_check(char a[])
{
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]!='0'&&a[i]!='1')
		{
			printf("You enter a wrong number=");
			exit(1);
		}
		i++;
	}
	printf("Binary number entered sucessfuly\n");
}
int b2d_convert(char a[])
{
	int l,i=0,d=0;
	l=strlen(a)-1;
	c=l+1;
	while(l>=0)
	{
		if(a[l]=='1')
		{
			d=d+pow(2,i);
		}
		i++;
		l--;
	}
	return (d);
}
void d2b_convert(int n)
{
	int m,i=0,j=0;
	m=n;
	while(m!=1)
		j++,m=m/2;
	int r[j+1];
	while(n!=0)
	{
		r[i++]=n%2;
		n=n/2;
	}
	printf("\nThe binary number is-");
	for(i=i-1;i>=0;i--)
		printf("%d",r[i]);
}
