#include<iostream>
using namespace std;
class number
{
	int n;
	public:
		void getdata();
};
void number :: getdata()
{
	cout<<"Enter a number=";
	cin>>n;
	cout<<"N="<<n;
	cout<<endl<<"Address of N="<<&n;
	cout<<endl<<"Alloocated memory="<<sizeof(n);
}
int main()
{
	class number obj1,obj2;
	cout<<"Address of obj1="<<&obj1;
	cout<<endl<<"allocated memory for obj1="<<sizeof(obj1)<<" Byte";
	obj1.getdata();
	cout<<endl<<"Address of obj2="<<&obj2;
	cout<<"Allocated memory for obj2="<<sizeof(obj2)<<" Byte";
	obj2.getdata();
	return 0;
}
