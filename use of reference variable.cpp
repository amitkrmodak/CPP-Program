#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &b=a;
	cout<<"A="<<a<<" and addess of A="<<&a<<endl;
	cout<<"B="<<b<<" and addess of B="<<&b<<endl;
	b++;
	cout<<endl<<"After increment b....."<<endl;
	cout<<"A="<<a<<" and addess of A="<<&a<<endl;
	return 0;
}
