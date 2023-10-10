#include<stdio.h>
#include<stdlib.h>
void merge(int [],int,int [],int ,int []);
void getdata(int [],int );
void shorting(int [],int );
void display(int [],int );
int main()
{
	int *a,*b,*c,m,n;
	printf("\n Enter first array size:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	getdata(a,n);
	shorting(a, n);
	display(a,n);
	printf("\n Enter Second array size:");
	scanf("%d",&m);
	b=(int*)malloc(m*sizeof(int));
	getdata(b,m);
	shorting(b,m);
	display(b,m);
	c=(int*)malloc((m+n)*sizeof(int));
	merge(a,n,b,m,c);
	printf("\n After Merge \n");
	display(c,m+n);
	return 0;
}
void getdata(int x[],int y)
{
	
	int i;
	printf("\n Enter array elements:\n");
	for(i=0;i<y;i++)
		scanf("%d",&x[i]);
}
void display(int p[],int q)
{
	
	int i;
	for(i=0;i<q;i++)
		printf("%d ",p[i]);
}
void merge(int a[],int n,int b[],int m,int c[])
{
	int i,j,k;
	i=j=k=0;
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
			c[k++]=a[i++];
		else
			c[k++]=b[j++];
	}
	while(i<n)
		c[k++]=a[i++];
	while(j<m)
		c[k++]=b[j++];
}
void shorting(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
}


