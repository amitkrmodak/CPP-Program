#include<iostream>
using namespace std;
long fact(int n)
{
	if(n==0)
		return 1;
	else
		return (n*fact(n-1));
}
int main()
{
	int n;
	cout<<"Enter a possitive integer";
	cin>>n;
	cout<<"Factorial of"<<n<<"is"<<fact(n);
	return 0;
}
