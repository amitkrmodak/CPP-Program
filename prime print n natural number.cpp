#include<stdio.h>
int main()
{
	int j,n,i,f;
	printf("Enter the last number=");
	scanf("%d",&n);
	printf("\nThe prime number between the two range are---\n");
	for(j=2;j<=n;j++)
	{
		i=2,f=0;
		while(i<=j/2)
		{
			if(j%i==0)
			{
				f=1;
				break;
			}
			i++;	
		}
		if(f==0)
			printf("%5d",j);
	}
	return 0;
}
