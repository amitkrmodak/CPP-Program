#include<stdio.h>
#include<stdlib.h>
void Sort(int c[],int m);
void getdata(int a[],int n);
void display(int a[],int n);
void sort(int a[],int m,int b[],int n,int c[]);
main()
{
	int *a,*b,*c,m,n;
	printf("Size of first array : ");
	scanf("%d",&m);
	a=(int*)malloc(m*sizeof(int));
	getdata(a,m);
	printf("\nSize of second array : ");
	scanf("%d",&n);
	b=(int*)malloc(n*sizeof(int));
	getdata(b,n);
	printf("\na[%d] = ",m);
	display(a,m);
	printf("\nb[%d] = ",n);
	display(b,n);
	c=(int*)malloc((m+n)*sizeof(int));
    sort(a,m,b,n,c);
    printf("\nThe sorting array is----\n");
    display(c,m+n);
    return 0;
}
void getdata(int a[],int n)
{
	printf("\nEnter array elements : ");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}
void sort(int a[],int m,int b[],int n,int c[])
{
	int i,j,k=0,max=0;
	for(i=0;i<m;i++)
	c[k++]=a[i];
	for(i=0;i<n;i++)
	c[k++]=b[i];
	printf("\n");
	display(c,m+n);
	for(i=0;i<m+n;i++)
	{
	for(j=i+1;j<m+n;j++)
		{
			if(c[i]>c[j])
			{
				max=c[i];
				c[i]=c[j];
				c[j]=max;
			}
		}
	}
}
