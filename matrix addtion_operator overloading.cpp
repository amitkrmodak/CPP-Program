#include<iostream>
#include<iomanip>
using namespace std;
class matrix{
	int **arr,r,c;
	public:
		matrix(int a,int b)
		{
			r=a,c=b;
			arr=new int*[r];
			for(int i=0;i<c;i++)
			{
				arr[i]=new int [c];
			}
		}
		void getdata()
		{
			cout<<endl<<"Enter the elements of the matrix---"<<endl;
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<"a["<<i<<"]["<<j<<"]=";
					cin>>arr[i][j];
				}
			}
		}
		void display()
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<setw(5)<<arr[i][j];
				}
				cout<<endl;
			}
		}
		void operator+=(matrix &m)
		{
	
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					arr[i][j]=arr[i][j]+m.arr[i][j];
				}
			}
		}
};
int main()
{
	int m,n;
	cout<<"Enter the row and coloumn of the two  matrix=";
	cin>>m>>n;
	matrix m1(m,n),m2(m,n);
	m1.getdata();
	m2.getdata();
	cout<<endl<<"The 1st matrix is---"<<endl;
	m1.display();
	cout<<endl<<"The 2nd matrix is---"<<endl;
	m2.display();
	m1+=m2;
	cout<<endl<<"After addition the two matrix the result is--"<<endl;
	m1.display();
}
