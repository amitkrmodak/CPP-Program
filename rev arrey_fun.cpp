#include<stdio.h>
#include<stdlib.h>
void rev(int a[],int n);
void display (int a[],int);
int main()
{
	int *a,n;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nEnter the elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before reverse arrey elements are----- ");
	display (a,n);
	rev(a,n);
	display (a,n);
	return 0;
}
void rev(int b[],int n)
{
	int t,i=0,j=n-1;
	while(i<j)
	{
		t=b[i];
		b[i]=b[j];
		b[j]=t;
		i++;
		j--;
	}
	
}
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
}
