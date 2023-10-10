/* sin series print*/
#include<iostream>
#include<cmath>
int fact (int);
using namespace std;
int main()
{
	cout<<"enter the last position of the element=";
	int n,x;
	cin>>n;
	cout<<"The series of sin(x) upto "<<n<<" is--"<<endl;
	for(int i=1,j=1;i<=n;i++,j=j+2)
	{
		if(i%2==0)
		{
			cout<<"-(x^"<<j<<")/"<<j<<"!";
		}
		else
		{
			cout<<"+(x^"<<j<<")/"<<j<<"!";
		}
	}
	cout<<endl<<"Enter the value of x=";
	cin>>x;
	unsigned res=0.0;
	for(int i=1,j=1;i<=n;i++,j=j+2)
	{
		if(i%2==0)
		{
			res=res-((pow(x,j))/(fact(j)));
		}
		else
		{
			res=res+((pow(x,j))/(fact(j)));
		}
	}
	cout<<endl<<"sin("<<x<<")= "<<res;
	return 0;
}
int fact(int n)
{
	if(n==1)
		return n;
	else
		return n*fact(n-1);
}
