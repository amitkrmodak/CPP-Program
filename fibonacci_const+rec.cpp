/*Fibonacci series*/
#include<iostream>
using namespace std;
int fibonacci(int x)
{
	if(x==0)
		return 0;
	else if(x==1)
		return 1;
	else
		return (fibonacci(x-1)+fibonacci(x-2));
}
class fibo
{
	int n;
	public:
		fibo(int a)
		{
			n=a;
		}
		void cal();
};
void fibo :: cal()
{
	int res,i,j=0;
	cout<<"The fibonacci series of "<<n<<" term is-";
	for(i=1;i<=n;i++)
	{
		res=fibonacci(j);
		cout<<" "<<res;
		j++;
	}
}
main()
{
	cout<<"Enter the last term=";
	int m;
	cin>>m;
	fibo obj(m);
	obj.cal();	
}

