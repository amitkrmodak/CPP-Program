#include<stdio.h>
struct student
{
	int r,p;
	char n[20],a[20];
};
int main()
{
	struct student s1,s2;
	printf("Enter 1st student information-------");
	printf("\nEnter Name=");
	gets(s1.n);
	printf("\nEnter Roll No.=");
	scanf("%d",&s1.r);
	printf("\nEnter Adress=");
	gets(s1.a);
	printf("\nEnter Contact no,=");
	scanf("%d",s1.p);
	
	printf("Enter 2st student information-------");
	printf("\nEnter Name=");
	gets(s2.n);
	printf("\nEnter Roll No.=");
	scanf("%d",&s2.r);
	printf("\nEnter Adress=");
	gets(s2.a);
	printf("\nEnter Contact no,=");
	scanf("%d",s2.p);
	if((s1.n==s2.n)&&(s1.r==s2.r)&&(s1.a==s2.a)&&(s1.p==s2.p))
		printf("\nSame");
	else
		printf("\nNot Same");
	return 0;
}
