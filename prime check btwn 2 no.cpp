#include<stdio.h>
int main()
{
	int min,max,i=2;
	printf("\nEnter the first number=");
	scanf("%d",&min);
	printf("\nEnter the last number=");
	scanf("%d",&max);
	while(min<=max)
	{
		while(i<=min/2)
		{
			if(min%i==0)
			{
				break;
			}
			i++;
			printf("%5d",min);
		}
		
		min++;
	}
	return 0;
}
