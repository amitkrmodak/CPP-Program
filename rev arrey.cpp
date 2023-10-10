#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int i,j=4,t;
	printf("Before reverse");
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	i=0;
	while(i<j)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i++;
		j--;
	}
	printf("\nArter reverse");
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	return 0;
}
