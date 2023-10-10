#include<iostream>
using namespace std;
int reverse(int,int);
class sum
{
	int a,b,s;
	public:
		void getdata(void);
		//void cal(void);
		void output(void);
};
void sum::getdata(void)
{
	cout<<"Enter a number=";
	cin>>a;
}
void sum::output(void)
{
	s=reverse(a,0);
	if(s==a)
		cout<<a<<" is a palindrom number";
	else
		cout<<a<<" is not a palindrom number";
}
int main()
{
	sum p;
	p.getdata();
	//p.cal();
	p.output();
	return 0;
}
int reverse(int n,int r)
{
	if(n==0)
		return r;
	else
		return reverse (n/10,r*10+n%10);
}
