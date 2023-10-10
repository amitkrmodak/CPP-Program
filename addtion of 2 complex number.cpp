#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex(int a,int b)
		{
			real=a,img=b;
		}
		complex operator+(complex &obj)
		{
			real=real+obj.real;
			img=img+obj.img;
		}
		void display()
		{
			cout<<real<<" + "<<img<<" i";
		}
};
int main()
{
	int r1,i1,r2,i2;
	cout<<"Enter the 1st complex number=";
	cout<<endl<<"Real=";
	cin>>r1;
	cout<<"Img=";
	cin>>i1;
	cout<<"Enter the 2nd complex number=";
	cout<<endl<<"Real=";
	cin>>r2;
	cout<<"Img=";
	cin>>i2;
	complex obj1(r1,i1),obj2(r2,i2);
	cout<<endl<<"The 1st complex number is--";
	obj1.display();
	cout<<endl<<"The 2nd complex number is--";
	obj2.display();
	obj1+obj2;
	cout<<endl<<"The result is--";
	obj1.display();
	return 0;
}
