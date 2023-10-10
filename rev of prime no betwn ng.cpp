#include<stdio.h>
int main()
{
	int min,s,max,i=2,m;
	printf("Enter the 1st number=");
	scanf("%d",&min);
	printf("\nEnter 2nd number=");
	scanf("%d",&max);
	printf("The prime numbers between the numbers-------");
	while(min<=max)
	{
		while(i<=min/2)
		{
			while(min%i==0)
			{
				break; 
			}
			i++;
		}
		m=min;
		while(m!=0)
		{
			s=s*10+m%2;
			m=m/2;
		}
		printf("%5d",s);
		min++;
	}
	return 0;
}
