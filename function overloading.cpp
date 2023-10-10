#include<iostream>
using namespace std;
int area (int);
int area (int,int);
float area (float);
int main()
{
	int n,a,b;
	float  r;
	cout<<"Enter side for square=";
	cin>>n;
	cout<<"\nEnter 2 sides for rectangle=";
	cin>>a>>b;
	cout<<"Enter radius for circle=";
	cin>>r;
	cout<<"The area of square="<<area(n)<<endl;
	cout<<"The area of rectangle="<<area(a,b)<<endl;
	cout<<"The area of circle="<<area(r)<<endl;	
	return 0;
}
int area (int a)
{
	return(a*a);
}
int area (int a,int b)
{
	return(a*b);
}
float area (float a)
{
	return(3.14*a*a);
}
