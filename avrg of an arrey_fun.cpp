#include<stdio.h>
float avrg(int[],int);
int main()
{
	int n,i,a[20],s=0;
	float b;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	printf("\nEnter the elements---\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b=avrg(a,n);
	printf("\nThe average of the numbers are=%f",b);
	return 0;
}
float avrg(int a[],int n)
{
	int i,s=0;
	float av;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	av=s/n;
	return(av);
}
