#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*a,j,c;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nEnter the elements----\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe elements are------\n");
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
	printf("\nThe common elements are------\n");
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		if(c!=1)
			printf("\n%d-%d times",a[i],c);
	}
}
