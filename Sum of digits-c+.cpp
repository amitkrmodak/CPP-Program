#include<iostream>
using namespace std;
class sum
{
	int a,r=0;
	public:
		void getdata()
		{
			cout<<"Enter a numbers=";
			cin>>a;
		}
		void cal()
		{
			while(a!=0)
			{
				r=r+a%10;
				a=a/10;
			}
		}
		void display()
		{
			cout<<endl<<"Sum of digit-"<<r;
		}
};
int main()
{
	sum s;
	s.getdata();
	s.cal();
	s.display();
	return 0;
}
