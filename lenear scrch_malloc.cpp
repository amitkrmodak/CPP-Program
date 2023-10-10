#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,i,r=0,s,p=0;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof (int));
	printf("\nEnter the elements-------\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		printf("%5d",arr[i]);
	printf("\nEnter the number you want to scarch=");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		p++;
		if(arr[i]==s)
		{
			r=1;
			break;
		}
	}
	if(r==1)
	{
		printf("\nThe number is  in the list");
		printf("\nThe position of %d is %d",s,p);
	}
	else
		printf("\nThe number is not in the list");
	return 0;
}
