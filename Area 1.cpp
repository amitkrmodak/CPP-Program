#include<stdio.h>
//#include<math.h>
int main()
{
	int n;
	float sc,sr,ss,r,a,b,c;
	printf("CIRCLE=1,RECTANGLE=2,SQUARE=3");
	printf("\nEnter your choice=");
	scanf("%d",&n);
	if(n==1)
	{
		printf("\nEnter the radius of CIRCLE=");
		scanf("%f",&r);
		sc=3.14*r*r;
		//sc=circle(r);
		printf("\nThe area of circle is=%f",sc);
	}
	else if(n==2)
	{	
		printf("\nEnter the sides of RECTANGLE="); 
		scanf("%f%f",&a,&b);
		sr=a*b;
		//sr=rectangle (a,b);
		printf("\nThe area of rectangle=%f",sr);
	}
	else if(n==3)
	{
		printf("\nEnter the side of SQUARE=");
		scanf("%f",&c);
		ss=c*c;
		//ss=square(c);
		printf("\nThe area of aquare=%f",ss);
	}
	else
	{
		printf("\n Wrong Information ");
	}
	return 0;
}
