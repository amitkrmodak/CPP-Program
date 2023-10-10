#include<stdio.h>
int main()
{
	int m;
	float x,sum=0,average;
	printf("Enter the value one after another--------\nEnter a negative number at the end------\n");
	for(m=1;m<=1000;++m)
	{
		scanf("%f",&x);
		if(x<0)
			break;
		sum +=x;
	}
	average = sum/(float)(m-1);
	printf("\n");
	printf("\nNumber of values - %d",m-1);
	printf("\nSum=%f",sum);
	printf("\nAverage=%f",average);
	return 0;
}


