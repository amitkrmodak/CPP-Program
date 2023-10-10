#include<stdio.h>
int main()
{
	int i,n;
	char c;
	printf("Number Division---------------\n");
	printf("90-100=AA\n80-89=A+\n70-79=A\n50-69=B\n30-49=C\nBelow30=FAIL");
	printf("\nEnter your number=");
	scanf("%d",n);
	i=n/10;
	switch(i)
	{
		case 10:
		case 9:
			c='AA';
			break;
		case 8:
			c='A+';
			break;
		case 7:
			c='A';
			break;
		case 6:
		case 5:
			c='B';
			break;
		case 4:
		case 3:
			c='C';
			break;
		default:
			c='FAIL';
	}
	printf("Your grade is=%c",c);
	return 0;
}
