#include<stdio.h>
#include<math.h>
#define p 3.14;
float k,sc,sr,ss;
float circle (float);
float square (float);
float rectangle (float,float);
int main()
{
	int n;
	float r,a,b,c;
	printf("CIRCLE=1,RECTANGLE=2,SQUARE=3");
	printf("\nEnter your choice=");
	scanf("%d",&n);
	if(n==1)
	{
		printf("\nEnter the radius of CIRCLE=");
		scanf("%f",&r);
		sc=circle(r);
		printf("\nThe area of circle is=%f",sc);
	}
	else if(n==2)
	{	
		printf("\nEnter the sides of RECTANGLE="); 
		scanf("%f%f",&a,&b);
		sr=rectangle (a,b);
		printf("\nThe area of rectangle=%f",sr);
	}
	else if(n==3)
	{
		printf("\nEnter the side of SQUARE=");
		scanf("%f",&c);
		ss=square(c);
		printf("\nThe area of aquare=%f",ss);
	}
	else
	{
		printf("\n Wrong Information ");
	}
	return 0;
}
/*float circle (float x)
{
	int l;
	l=pow(x,2);
	k=p*l;
	return (k);
}*/
float rectangle (float x, float y)
{
	k=x*y;
	return (k);
}
float square (float x)
{
	k=x*x;
	return (k);
}
