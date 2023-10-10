#include<stdio.h>
#include<stdlib.h>
int max_cal(int [],int);
int min_cal(int [],int);
int main()
{
	int *a,n,max,min,b;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nEnter the elements------\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe elements are------\n");
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
	while(1)
	{
		printf("\nPress 1 for print MAX value");
		printf("\nPress 2 for print MIN value");
		printf("\nPress 3 for exit");
		printf("\nEnter your choice=");
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				max=max_cal(a,n);
				printf("\nThe Max value is =%d",max);
				break;
			case 2:
				min=min_cal(a,n);
				printf("\nThe Max value is =%d",min);
				break;
			case 3:
				exit(1);
				break;
			default:
				printf("Error");
				break;
		}
	}
	return 0;
}
int max_cal(int a[],int n)
{
	int m;
	m=a[0];
	for(int i=1;i<n;i++)
	{
		if(m<a[i])
			m=a[i];
	}
	return m;
}
int min_cal(int a[],int n)
{
	int m;
	m=a[0];
	for(int i=1;i<n;i++)
	{
		if(m>a[i])
			m=a[i];
	}
	return m;
}
