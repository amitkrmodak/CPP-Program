#include<iostream>
using namespace std;
int fun(int &);
int main()
{
	int a=10;
	cout<<endl<<"Address of a="<<&a;
	cout<<endl<<"Value of a="<<a;
	const int &x=fun(a);
	cout<<endl<<"Address of x="<<&x;
	cout<<endl<<"Value of X="<<x;
	return 0;
}
int fun(int &m)
{
	m=m+5;
	cout<<endl<<"Address of m="<<&m;
	cout<<endl<<"value of m="<<m;
	return m;
}
