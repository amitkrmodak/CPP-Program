#include<iostream>
#include<stdlib.h>
using namespace std;
class matrix
{
	int **a,m,n,i,j,x;
	public:
		void input(void);
		void cal_add(void);
		void cal_sub(void);
		void cal_mul(void);
		void output(void);	
};
void matrix::input(void)
{
	int i,j;
	cout<<"Enter matrix------";
	cout<<"\nEnter the Row size=";
	cin>>m;
	cout<<"\nEnter the Coloumn size=";
	cin>>n;
	a=(int *)malloc((m*n)*sizeof(int));
	cout<<"\nEnter the elements of 1st matrix----\n";
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		cout<<"\nThe elements are-----\n"
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<"\t"<<a[i][j];
			}
			cout<<"\n";
		}
}
void matrix::cal_add(void)
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=x+a[i][j];		
		}
	}
	cout<<"\nThe addition result is---\n";
}
void matrix::cal_sub(void)
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=x-a[i][j];		
		}
	}
}
