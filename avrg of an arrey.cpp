#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*a,s=0;
	float b;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nEnter the elements---\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	b=s/n;
	printf("\nThe average of the numbers are=%f",b);
	return 0;
}
