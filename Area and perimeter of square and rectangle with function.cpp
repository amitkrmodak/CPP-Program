#include<stdio.h>
int n,m;
float area (float,float);
float perimeter (float, float);
int main()
{
	float a,b,ra,rp,sa,sp;
	printf("FOR RECTANGLE PRESS 1");
	printf("\nFOR SQUARE PRESS 2");
	printf("\nEnter your choice=");
	scanf("%d",&n);
	if(n==1)
	{
		printf("Enter the side of RECTANGLE=");
		scanf("%f%f",&a,&b);
		printf("\nPRESS 1 FOR AREA AND 2 FOR PERIMETER \nEnter your choice=");
		scanf("%d",&m);
		if(m==1)
		{
			ra=area(a,b);
			printf("\nThe AREA of RECTANGLE is=%f",ra);
		}
		else if(m==2)
		{
			rp=area(a,b);
			printf("\nThe PERIMETER of RECTANGLE is=%f",rp);
		}
		else
		{
			printf("\nWrong Information, Try Again");
		}
	}
	else  if(n==2)
	{
		printf("\nEnter the SIDE of SQUARE=");
		scanf("%f",&a);
		b=a;
		printf("\nPRESS 1 FOR AREA AND 2 FOR PERIMETER\nEnter your choice=");
		scanf("%d",&m);
		if(m==1)
		{
			sa=area(a,b);
			printf("\nThe AREA of SQUARE is=%f",sa);
		}
		else if(m==2)
		{
			sp=perimeter (a,b);
			printf("\nThe PERIMETER of SQUARE is=%f",sp);
		}
		else
		{
			printf("\nWrong Information,Try Again");
		}
	}
	else
	{
		printf("\nWrong Information,Try Again");
	}
	return 0;
}
float area (float x,float y)
{
	float resa;
	resa=x*y;
	return(resa);
}
float perimeter (float x,float y)
{
	float resp;
	resp=2*(x+y);
	return (resp);
}
