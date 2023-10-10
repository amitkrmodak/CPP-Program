#include<iostream>
using namespace std;
class student
{
	int roll,marks;
	public:
		void getdata(student [],int);
		student find_highest(student [],int);
		void display(student &obj);
};
void student :: getdata(student a[],int n)
{
	cout<<"Enter student details";
	for(int i=0;i<n;i++)
	{
		cout<<endl<<"Enter "<<i+1<<" student marks & roll=";
		cin>>a[i].marks;
		cin>>a[i].roll;
	}
}
student student :: find_highest(student a[],int n)
{
	int i,m=marks,p=0;
	for(i=1;i<n;i++)
	{
		if(m<a[i].marks)
		{
			m=a[i].marks;
			p=i;
		}
	}
	return(a[p]);
}
void student :: display(student &obj)
{
	cout<<endl<<endl<<"Highest marks="<<obj.marks;
	cout<<endl<<endl<<"Highest roll="<<obj.roll;
}
int main()
{
	student arr[5],obj;
	arr[0].getdata(arr,5);
	obj=arr[0].find_highest(arr,5);
	obj.display(obj);
	return 0;
}
