#include<stdio.h>
#include<stdlib.h>
void getdata(int [],int);
void cal(int[],int,int);
void display(int [],int);
int main()
{
	int *a,n,k,j;
	printf("\n Enter array size:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	getdata(a,n);
	printf("\nThe arrey elements are-\n");
	display(a,n);
	printf("\nEnter the position of the number you want to delete=");
	scanf("%d",&k);
	j=k-1;
	if(k<=n)
	{
		cal(a,n,j);
		printf("\nAfter delete the element the arrey is-----\n");
		display(a,(n-1));
	}
	else
	{
		printf("\nYou enter wrong position\n");
	}
	return 0;
}
void getdata(int a[],int n)
{
	printf("\n Enter array elements:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void display(int a[],int n,int m)
{
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}
void cal(int a[],int n,int j)
{
	for(int i=j;i<n-1;i++)
	{
			a[i]=a[i+1];
	}
}
