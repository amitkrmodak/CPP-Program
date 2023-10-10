#include<iostream>
using namespace std;
class sum
{
	int a,b,s;
	public:
		void input()
		{
			cout<<"Enter 2 number=";
			cin>>a>>b;
		}
		void cal()
		{
			s=a+b;
		}
		void output() 
		{
			cout<<"The result is="<<s;
		}
};
int main()
{
	sum p;
	p.input();
	p.cal();
	p.output();
	return 0;
}
