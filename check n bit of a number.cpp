#include<stdio.h>
int main()
{
	unsigned int n;
	int check,pos;
	printf("Enter a number=");
	scanf("%u",&n);
	printf("Enter the position=");
	scanf("%d",&pos);
	check=1;
	check=check<<pos-1;
	if(n&check>0)
		printf("%d position bit from LSB is 1",pos);
	else
		printf("%d position bit from LSB is 0",pos);
	return 0;
}
