#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void getdata(struct employee[],int);
void display(struct employee[],int);
void search(struct employee [],int,int);
struct employee{
	char name[20],ad[10];
	int id,pn,basic,hra,sal;
};
int main()
{
	struct employee *a;
	int n,i,s;
	printf("Enter the number of employee=");
	scanf("%d",&n);
	a=(struct employee *)malloc(n*sizeof(struct employee));
	getdata(a,n);
	display(a,n);
	printf("Enter the detail of a employee--\n");
	printf("Enter the id of that employee=");
	scanf("%d",s);
	search(a,n,s);
	return 0;
}
void getdata(struct employee a[],int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		printf("\nEnter the %d Employee details",i+1);
		printf("\nName=");
		fflush stdin;
		gets(a[i].name);
		printf("Id=");
		scanf("%d",&a[i].id);
		printf("Address=");
		fflush stdin;
		gets(a[i].ad);
		printf("Phone number=");
		scanf("%d",&a[i].pn);
		printf("Basic=");
		scanf("%d",&a[i].basic);
	}
}
void display(struct employee a[],int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		printf("\n%d Employee details",i+1);
		printf("\nName=");
		puts(a[i].name);
		printf("\nId=%d",a[i].id);
		printf("\nAddress=");
		puts(a[i].ad);
		printf("\nPhone number=%d",a[i].pn);
		printf("\nBaseic=%d",a[i].basic);
		a[i].hra=(a[i].basic*20)/100;
		a[i].sal=a[i].basic+a[i].hra;
		printf("\nAfter adding HRA the salary is=%d",a[i].sal);
	}
}
void search(struct employee a[],int n,int s)
{
	for(int i=0;i<n;i++)
	{
		if(a[i].id==s)
		{
		printf("\n%d Employee details",i+1);
		printf("\nName=");
		puts(a[i].name);
		printf("\nId=%d",a[i].id);
		printf("\nAddress=");
		puts(a[i].ad);
		printf("\nPhone number=%d",a[i].pn);
		printf("\nBaseic=%d",a[i].basic);
		a[i].hra=(a[i].basic*20)/100;
		a[i].sal=a[i].basic+a[i].hra;
		printf("\nAfter adding HRA the salary is=%d",a[i].sal);
		}
	}
}
