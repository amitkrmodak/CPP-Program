#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*a,i;
	printf("Enter the number of elemnts=");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
			printf("\n%5d",a[i]);
			printf("\nThe address of %d is %u",a[i],&a[i]);
	}
	/*free [n]a;
	for(i=0;i<n;i++)
	{
			printf("\nThe address of %d is %u",a[i],&a[i]);
	}*/
	return 0;
}
