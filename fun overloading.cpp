#include<iostream>
using namespace std;
class overloading
{
	int a;
	float b;
	public:
		void getdata(int);
		void getdata(float);
};
void overloading :: getdata(int m)
{
	a=m;
	cout<<"Int m="<<a;
}
void overloading :: getdata(float m)
{
	b=m;
	cout<<endl<<"Float m="<<b;
}
int main()
{
	class overloading obj;
	obj.getdata(10);
	float b=28.14;
	obj.getdata(b);
	return 0;
}
