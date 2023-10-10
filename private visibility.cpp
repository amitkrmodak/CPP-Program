#include<iostream>
using namespace std;
class A
{
	protected:
		int arr[];
		int n;
	public:
		A()
		{
			n=5;
			cout<<"In class A N="<<n;
		}
		void getdata()
		{
			cout<<endl<<"Enter the array elemets---"<<endl;
			for(int i=0;i<n;i++)
			{
				cin>>arr[i];
			}
		}
		void find_min()
		{
			int min=arr[0];
			for(int i=1;i<n;i++)
			{
				if(min>arr[i])
					min=arr[i];
			}
			cout<<"Min="<<min;
		}	
};
class B : public A 
{
	public:
		B()
		{
			n=4;
			cout<<endl<<"In class B n="<<n;
		}
		void find_max()
		{
			int max=arr[0];
			for(int i=1;i<n;i++)
			{
				if(max<arr[i])
					max=arr[i];
			}
			cout<<"Max="<<max;
		}
};
int main()
{
	B obj;
	obj.getdata();
	obj.find_min();
	obj.find_max();
	return 0;
}
