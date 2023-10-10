#include<iostream>
#include<iomanip>
using namespace std;
class det{
	int **arr,r,c;
	public:
		int i,j;
		det(int x,int y)
		{
			r=x,c=y;
			arr=new int*[r];
			for(int i=0;i<r;i++)
				arr[i]=new int [c];
		}
		void getdata()
		{
			cout<<endl<<"Enter the elements of the matrix---"<<endl;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cout<<"a["<<i<<"]["<<j<<"]=";
					cin>>arr[i][j];
				}
			}
		}
		void display()
		{
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cout<<setw(5)<<arr[i][j];
				}
				cout<<endl;
			}
		}
		void value()
		{
			int k,l,a,b,r1=1,r2=1,r,s;
			for(k=0,l=0;l<=2;l++)
			{
				
						if(l==0)
						{
							for(a=1;a<=2;a++)
							{
								for(b=1;b<=2;b++)
								{
									if(a==b)
										r1=r1*arr[a][b];
									else
										r2=r2*arr[a][b];
								}
							}
							r=arr[k][l]*(r1-r2);
							cout<<endl<<"r="<<r;
						}
						else if(l==1)
						{
							r1=1,r2=1;
							for(a=1,b=0;a<=2;a++)
							{
								for(b=0;b<=2;b++)
								{
									s=a+b;
									if(b!=1)
									{
										if(s==1||s==4)
											r1=r1*arr[a][b];
										else
											r2=r2*arr[a][b];
									}
								}
							}
							r=r-(arr[k][l]*(r1-r2));
							cout<<endl<<"r="<<r;
						}
						else
						{
							r1=1,r2=1;
							for(a=1;a<=2;a++)
							{
								for(b=0;b<=1;b++)
								{
									s=a+b;
									if(s==2)
										r2=r2*arr[a][b];
									else
										r1=r1*arr[a][b];
								}
							}
							r=r+(arr[k][l]*(r1-r2));
							cout<<endl<<"r="<<r;
						}
						
			}
				
			cout<<endl<<"The value of the 3rd order matrix is="<<r;
		}
};
int main()
{
	int m,n;
	cout<<"Enter row and coloumn of the matrix=";
	cin>>m>>n;
	det obj1(m,n);
	obj1.getdata();
	cout<<endl;
	obj1.display();
	obj1.value();
	return 0;
}
