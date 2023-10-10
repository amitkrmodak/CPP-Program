#include<iostream>
using namespace std;
int factorial(int,int);
class fact
{
	int n;
	double m;
	public:
		void input();
		void cal();
		void output();
};
void fact::input(void)
{
	cout<<"Enter a possitive integer";
	cin>>n;
}
void fact::cal(void)
{
	m=factorial(n,1);
}
void fact::output(void)
{
	cout<<"The Factorial of"<< n <<"is ="<< m;
}

int main()
{
	fact p;
	p.input();
	p.cal();
	p.output();
	return 0;
}
int factorial(int n, int r)
{
	if(n==1)
		return r;
	else
		return factorial(n-1,r*n);
}
