#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*a,i,s,j,f=0,u,m,t,l=0,b;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\nEnter the elements----\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe elements are-----\n");
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
		printf("\nThe ascending order of the list is----\n");
		for(i=0;i<n;i++)
			printf("%5d",a[i]);
		printf("\nEnter a number you want to scarch=");
		scanf("%d",&s);
		u=n;
	 	for(i=0;i<n;i++)
	 	{
	 		m=(l+u)/2;
	 		if(a[m]<s)
	 		{	
	 		l=m,u=n;
	 		}
	 		else if(a[m]==s)
	 		{
	 			f=1;
	 			break;
	 		}
	 		else
	 		{
	 	 		l=0,u=m;
	 		}
	 	}
	 	if(f==1)
			printf("\nThe number is in the list");
		else
			printf("\nThe number is not in the list");
	return 0;
} 
