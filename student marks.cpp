#include<stdio.h>
#include<stdlib.h>
void getdata(int[],int);
void display(int[],int);
int f;
int main()
{
	int *tm,n;
	printf("Enter the number of student=");
	scanf("%d",&n);
	tm=(int *)malloc(n*sizeof(int));
	getdata(tm,n);
	display(tm,n);
	return 0;
}
void getdata(int a[],int n)
{
	int m[5],i,j;
	float p;
	for(i=0;i<n;i++)
	{
		a[i]=0;
		printf("\nEnter the %d student's marks------\n",i+1);
		printf("Enter the full marks=");
		scanf("%d",&f);
		for(j=0;j<5;j++)
		{
			printf("\nEnter the %d subject marks=",j+1);
			scanf("%d",&m[j]);
			a[i]=a[i]+m[j];
		}
		p=(a[i]*100)/5*f;
		printf("The total marks of the student is=%d",a[i]);
		printf("\nThe persentage of the student is=%f",p);
	}
}
void display(int a[],int n)
{
	int i,max=a[0],min=a[0];
	float p;
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		else
		{
			min=a[i];
		}
	}
	p=(max*100)/5*f;
	printf("\nThe Highest marks is %d",max);
	printf("\nThe Highest persentage is %f",p);
	p=(min*100)/5*f;
	printf("\nThe Lowest marks is %d",min);
	printf("\nThe Lowest persentage is %f",p);
}
