#include<iostream>
#include<iomanip>
using namespace std;
class matrix{
	int **arr,r,c;
	public:
		int i,j;
		matrix(int a,int b)
		{
			r=a,c=b;
			arr=new int*[r];
			for(i=0;i<r;i++)
			{
				arr[i]=new int [c];
			}
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
		matrix add1(int t)
		{
			matrix temp(r,c);
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					temp.arr[i][j]=arr[i][j]+t;
				}
			}
			return temp;
		}
		matrix add2(matrix &obj)
		{
			matrix temp(r,c);
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					temp.arr[i][j]=arr[i][j]+obj.arr[i][j];
				}
			}
			return temp;
		}
		matrix sub1_(int t)
		{
			matrix temp(r,c);
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					temp.arr[i][j]=t-arr[i][j];
				}
			}
			return temp;
		}
		matrix sub_1(int t)
		{
			matrix temp(r,c);
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					temp.arr[i][j]=arr[i][j]-t;
				}
			}
			return temp;
		}
		matrix sub2(matrix &obj)
		{
			matrix temp(r,c);
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					temp.arr[i][j]=arr[i][j]-obj.arr[i][j];
				}
			}
			return temp;
		}
		matrix mul1(int t)
		{
			matrix temp(r,c);
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					temp.arr[i][j]=arr[i][j]*t;
				}
			}
			return temp;
		}
		matrix mul2(matrix &obj)
		{
			matrix temp(r,c);
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					temp.arr[i][j]=0;
				}
			}
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					for(int k=0;k<c;k++)
					{
						temp.arr[i][j]=temp.arr[i][j]+(arr[i][k]*obj.arr[k][j]);
					}
				}
			}
			return temp;
		}
		void store (matrix &obj)
		{
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					obj.arr[i][j]=arr[i][j];
				}
			}
		}
		int check_diagonal()
		{
			int f=1;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					if(i!=j)
					{
						if(arr[i][j]!=0)
						{
							f=0;
							break;
						}
					}
					else 
					{
						if(arr[i][j]==0)
						{
							f=0;
							break;
						}
					}
				}
			}
			return f;
		}
		matrix diagonal()
		{
			matrix temp(r,c);
			cout<<endl<<"The diagonal matrix of the matgrix is--"<<endl;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					if(i!=j)
					{
						temp.arr[i][j]=0;
					}
					else 
						temp.arr[i][j]=arr[i][j];
				}
			}
			return temp;
		}
		int check_unit()
		{
			int f=1;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					if(i!=j)
					{
						if(arr[i][j]!=0)
						{
							f=0;
							break;
						}
					}
					else 
					{
						if(arr[i][j]!=1)
						{
							f=0;
							break;
						}
					}
				}
			}
			return f;			
		}
		matrix transpose()
		{
			matrix temp(r,c);
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					temp.arr[j][i]=arr[i][j];
				}
			}
			return temp;
		}
		int equal(matrix &m)
		{
			int f=1;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					if(arr[i][j]!=m.arr[i][j])
					{
						f=0;
						break;		
					}
				}
			}
			return f;
		}
		void value_2()
		{
			int r1=1,r2=1;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					if(i==j)
						r1=r1*arr[i][j];
					else
						r2=r2*arr[i][j];
				}
			}
			cout<<endl<<"The value of 2nd order matrix is="<<(r1-r2);
		}
		void value_3()
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
				}		
			}	
			cout<<endl<<"The value of the 3rd order matrix is="<<r;
		}
};
int main()
{
	int a,b,m,n;
	cout<<"Enter the row and coloumn of the two  matrix=";
	cin>>m>>n;
	matrix m1(m,n),m2(m,n),m3(m,n);
	m1.getdata();
	m2.getdata();
	cout<<endl<<"The 1st matrix is---"<<endl;
	m1.display();
	cout<<endl<<"The 2nd matrix is---"<<endl;
	m2.display();
	int num,mat;
	while(1)
	{
	cout<<endl<<"Press 1 for addition";
	cout<<endl<<"Press 2 for substruction";
	cout<<endl<<"Press 3 for multiplication";
	cout<<endl<<"Press 4 to display the diagonal of any matrix";
	cout<<endl<<"Press 5 to check the matrix is a unit matrix or not";
	cout<<endl<<"Press 6 for transpose the matrix";
	cout<<endl<<"Press 7 to check the symmetric and skew-symmetric";
	cout<<endl<<"Press 8 for determinant";
	cout<<endl<<"Press 9 to store the result";
	cout<<endl<<"Press 10 to display the two matrix";
	cout<<endl<<"Press 11 for exit";
	cout<<endl<<"Enter your choice=";
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<endl<<"Press 1 for addition between 2 matrix";
			cout<<endl<<"Press 2 for addition between one matrix and a number";
			cout<<endl<<"Press 3 for exit";
			cout<<"Enter your choice for addition oeration=";
			cin>>b;
			switch(b)
			{
				case 1:
					m3=m1.add2(m2);
					cout<<"After addition 2 matrix the result is--"<<endl;
					m3.display();
					break;
				case 2:
					cout<<"Enter the number you want to add=";
					cin>>num;
					cout<<"Enter the serial number of the matrix you want to add with "<<num<<"=";
					cin>>mat;
					if(mat)
					{
						m3=m1.add1(num);
						cout<<"After addition between 1st matrix and "<<num<<" the result is---"<<endl;
						m3.display();
					}
					else
					{
						m3=m2.add1(num);
						cout<<"After addition between 2nd matrix and "<<num<<" the result is---"<<endl;
						m3.display();
					}
					break;
				case 3:
					exit(1);
				default:
					cout<<endl<<"You enter wrong number,Try again";
					break;
			}
			break;
		case 2:
			cout<<endl<<"Press 1 for substruction from 1 to 2";
			cout<<endl<<"Press 2 for substruction from 2 to 1";
			cout<<endl<<"Press 3 for substruction (1st matrix-number)";
			cout<<endl<<"Press 4 for substruction (number-1st matrix)";
			cout<<endl<<"Press 5 for substruction (2nd matrix-number)";
			cout<<endl<<"Press 6 for substruction (number-2nd matrix)";
			cout<<endl<<"Press 7 for exit";
			cout<<endl<<"Enter your choice for substruction operation=";
			cin>>b;
			switch(b)
			{
				case 1:
					m3=m1.sub2(m2);
					cout<<endl<<"After subtruction from 1 to 2 the result is--"<<endl;
					m3.display();
					break;
				case 2:
					m3=m2.sub2(m1);
					cout<<endl<<"After substruction from 2 to 1 the result is--"<<endl;
					m3.display();
					break;
				case 3:
					cout<<"Enter the number you want to substruct=";
					cin>>num;
					m3=m1.sub_1(num);
					cout<<endl<<"After substruction the result is---"<<endl;
					m3.display();
					break;
				case 4:
					cout<<"Enter the number you want to substruct=";
					cin>>num;
					m3=m1.sub1_(num);
					cout<<endl<<"After substruction the result is---"<<endl;
					m3.display();
					break;
				case 5:
					cout<<"Enter the number you want to substruct=";
					cin>>num;
					m3=m2.sub_1(num);
					cout<<endl<<"After substruction the result is---"<<endl;
					m3.display();
					break;
				case 6:
					cout<<"Enter the number you want to substruct=";
					cin>>num;
					m3=m2.sub1_(num);
					cout<<endl<<"After substruction the result is---"<<endl;
					m3.display();
					break;
				case 7:
					exit(1);
				default:
					cout<<endl<<"You enter wrong number, try again"<<endl;
					break;
			}
			break;
		case 3:
			cout<<endl<<"Press 1 for multiplication 2 matrix";
			cout<<endl<<"Press 2 for multiplication between 1st matrix and a number";
			cout<<endl<<"Press 3 for multiplication between 2nd matrix and a number";
			cout<<endl<<"Press 4 for exit";
			cout<<endl<<"Enter your choice for multiplication operation=";
			cin>>b;
			switch(b)
			{
				case 1:
					m3=m1.mul2(m2);
					cout<<endl<<"After multiplication 2 matrix the result is--"<<endl;
					m3.display();
					break;
				case 2:
					cout<<endl<<"Enter the number you want to multiply=";
					cin>>num;
					m3=m1.mul1(num);
					cout<<endl<<"After multiplication between 1st matrix and "<<num<<" the result is--"<<endl;
					m3.display();
					break;
				case 3:
					cout<<endl<<"Enter the number you want to multiply=";
					cin>>num;
					m3=m2.mul1(num);
					cout<<endl<<"After multiplication between 2nd matrix and "<<num<<" the result is--"<<endl;
					m3.display();
					break;
				case 4:
					exit(1);
				default:
					cout<<"You enter wrong number, try again";
					break;
			}
			break;
		case 4:
			cout<<endl<<"Enter the serial number of the matrix ";
			cin>>mat;
			if(mat==1)
			{
				num=m1.check_diagonal();
				if(num)
					cout<<endl<<"The matrix is already diagonal";
				else
				{
					m3=m1.diagonal();
					cout<<endl<<"The diagonal matrix of the matrix is--"<<endl;
					m3.display();
				}
			}	
			else
			{
				num=m2.check_diagonal();
				if(num)
					cout<<endl<<"The matrix is already diagonal";
				else
				{
					m3=m2.diagonal();
					cout<<endl<<"The diagonal matrix of the matrix is--"<<endl;
					m3.display();
				}
			}
			break;
		case 5:
			cout<<endl<<"Enter the serial number of the matrix ";
			cin>>mat;
			if(mat==1)
			{
				num=m1.check_unit();
				if(num)
					cout<<endl<<"The matrix is a unit matrix";
				else
					cout<<endl<<"The matrix is not a unit matrix";
			}	
			else
			{
				num=m2.check_unit();
				if(num)
					cout<<endl<<"The matrix is a unit matrix";
				else
					cout<<endl<<"The matrix is not a unit matrix";
			}
			break;
		case 6:
			cout<<endl<<"Enter the serial number of the matrix ";
			cin>>mat;
			if(mat)
			{
				m3=m1.transpose();
				m3.display();
			}
			else
			{
				m3=m2.transpose();
				m3.display();
			}
			break;
		case 7:
			cout<<endl<<"Enter the serial number of the matrix ";
			cin>>mat;
			if(mat)
			{
				m3=m1.transpose();
				num=m1.equal(m3);
				if(num)
					cout<<endl<<"The matrix is symmetric matrix";
				else
					cout<<endl<<"The matrix is skew-symmetric matrix";
			}
			else
			{
				m3=m2.transpose();
				num=m2.equal(m3);
				if(num)
					cout<<endl<<"The matrix is symmetric matrix";
				else
					cout<<endl<<"The matrix is skew-symmetric matrix";
			}
			break;
		case 8:
			cout<<endl<<"Press 1 to display the value of the 1st matrix";
			cout<<endl<<"Press 2 to display the value of the 2nd matrix";
			cout<<endl<<"Press 3 to display the value of a new matrix";
			cout<<endl<<"Enter your choice=";
			cin>>b;
			cout<<endl<<"This operation is performed only 2nd and 3rd order matrix...i.e. row=coloumn=2/3";
			switch(b)
			{
				case 1:
					if(m!=n)
					{
						cout<<endl<<"The row and coloumn of the matrix are not same";
					}
					else
					{
						if(m==2)
							m1.value_2();
						else if(m==3)
							m1.value_3();
						else
							cout<<endl<<"The operation can't performed";
					}
					break;
				case 2:
					if(m!=n)
					{
						cout<<endl<<"The row and coloumn of the matrix are not same";
					}
					else
					{
						if(m==2)
							m2.value_2();
						else if(m==3)
							m2.value_3();
						else
							cout<<endl<<"The operation can't performed";
					}
					break;
				case 3:
					cout<<endl<<"Enter row/coloumn of the new matrix=";
					cin>>num;
					matrix m4(num,num);
					m4.getdata();
					if(num==2)
						m4.value_2();
					else if(num==3)
						m4.value_3();
					else
						cout<<endl<<"The operation can't performed";
					break;
			}
			break;
		case 9:
			cout<<endl<<"Press 1 to store the result in 1st matrix";
			cout<<endl<<"Press 2 to store the result in 2nd matrix";
			cout<<endl<<"Enter your choice=";
			cin>>num;
			if(num==1)
			{
				m3.store(m1);
				cout<<endl<<"Storing complete...."<<endl<<"After storing the two matrix are--"<<endl;
				m1.display();
				cout<<endl;
				m2.display();
			}
			else
			{
				m3.store(m2);
				cout<<endl<<"Storing complete...."<<endl<<"After storing the two matrix are--"<<endl;
				m1.display();
				cout<<endl;
				m2.display();
			}
			break;
		case 10:
			cout<<endl<<"The two matrix are--"<<endl;
			m1.display();
			cout<<endl;
			m2.display();
			break;
		case 11:
			exit(1);
		default:
			cout<<"You enter wrong number, try again";
			break;
	}
	cout<<endl<<"-------------------"<<endl;
	}
}
