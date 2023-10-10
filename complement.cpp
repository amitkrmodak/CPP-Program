#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void getdata(char[]);
void display(char[]);
void check(char[]);
void cmplnt1(char[]);
void cmplnt2(char[]);
char m[20];
int main()
{
	int j;
	char n[20];
	getdata(n);
	cmplnt1(n);	
	cmplnt2(n);		
	return 0;
}
void getdata(char s[])
{
	printf("\nEnter binary number=");
	gets(s);
}
void check(char n[])
{
	int i=0;
	while(n[i]!='\0')
	{
		if(n[i]!='1'&&n[i]!='0')
		{
			printf("\nYou enter wrong number");
			printf("\nIdot %c is not a binary number",n[i]);
			exit(1);
		}
		i++;
	}
	printf("\nBinary digits are entered successfully");
}
void display(char s[])
{
	puts(s);
}
void cmplnt1(char n[])
{
	check(n);
	int i=0;
	strcpy(m,n);
	while(m[i]!='\0')
	{
		if(m[i]=='1')
			m[i]='0';
		else
			m[i]='1';
		i++;
	}
	printf("\nThe 1s complement the number is-");
	display(m);
}
void cmplnt2(char n[])
{
	strcpy(m,n);
	int i,j;
	i=strlen(m);
	i=i-1;
	while(i>=0)
	{
		if(m[i]=='1')
		{
			j=i;
			break;
		}	
		i--;
	}
	j=j-1;
	while(j>=0)
	{
		if(m[j]=='1')
			m[j]='0';
		else
			m[j]='1';
		j--;
	}
	printf("The 2s complement the number is-");
	display(m);
}
