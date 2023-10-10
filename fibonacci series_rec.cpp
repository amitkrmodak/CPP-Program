#include<iostream>
using namespace std;
int fib(int);
int main()
{
	int n,res,j=0;
	cout<<"Enter the last term=";
	cin>>n;
	cout<<"The fibonacci series is=";
	for(register int i=1;i<=n;i++)
	{
		res=fib(j);
		cout<<" "<<res;
		j++;
	}
}
int fib(int a)
{
	if(a==0)
		return 0;
	else if(a==1)
		return 1;
	else
		return (fib(a-1)+fib(a-2));
}

