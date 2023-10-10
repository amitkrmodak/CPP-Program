#include<stdio.h>
int main()
{
	int min,max,i=2,s=0,min2;
	printf("Enter the first number=");
	scanf("%d",&min);
	min2=min;
	printf("\nEnter the second number=");
	scanf("%d",&max);
	printf("\nThe prime numbers are=");
	while(min<=max)
	{
		while(i<=min/2)
		{
			if(min%i==0)
			{
				break;
			}
			i++;
		}
		printf("%5d",min);
		s=s+min;
		min++; 
	}
	printf("\nThe summation of prime number between %d and %d is %d",min2,max,s);
	return 0;
}
