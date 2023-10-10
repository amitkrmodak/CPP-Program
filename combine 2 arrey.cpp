#include<stdio.h>
#include<stdlib.h>
void combine(int a[],int n,int b[],int m,int c[]);
void getdata(int a[],int n);
void display(int a[],int n);
int main()
{
	int *a,*b,*c,m,n;
	printf("\n Enter first array size:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	getdata(a,n);
	printf("\n Enter Second array size:");
	scanf("%d",&m);
	b=(int*)malloc(m*sizeof(int));
	getdata(b,m);
	c=(int*)malloc((m+n)*sizeof(int));
	combine(a,n,b,m,c);
	printf("\n After Combine two array's'\n");
	display(c,m+n);
	return 0;
}
void getdata(int a[],int n){
	
	int i;
	printf("\n Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void display(int a[],int n){
	
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
void combine(int a[],int n,int b[],int m,int c[]){
	
	int i,k=0;
	for(i=0;i<n;i++)
		c[k++]=a[i];
	for(i=0;i<m;i++)
		c[k++]=b[i];
}


