#include<stdio.h>
#include<stdlib.h>
struct stduent
{
	char n[20];
	int m[6];
};
int main()
{
	struct stduent *s;
	int i,j,k,*t;
	float *ave;
	printf("Enter the number of the student=");
	scanf("%d",&k);
	s=(int *)malloc(k*sizeof(int));
	t=(int *)malloc(k*sizeof(int));
	ave=(int *)malloc(k*sizeof(float));
	t[0]=0;
	for(i=0;i<k;i++)
	{
		printf("\nEnter the Name and Marks of %d student------\n",i+1);
		printf("Name=");
		scanf("%s",n[i]);
		for(j=0;j<6;j++)
		{
			printf("Subject %d="j+1);
			scanf("%d",s[i].m[j]);
			t[i]=t[i]+s[i].m[j];
		}
		a[i]=t[i]/8;
	}
	for(i=0;i<k;i++)
	{
		printf("\nThe Name and Marks of %d student are------\n",i+1);
		printf("Name=");
		printf("%s",n[i]);
		printf("\nTotal marks=%d",t[i]);
		printf("\nAverage=%d",a[i]);
	}
	return 0;
}
