#include<iostream>
#include<vector>
#define SIZE 5
using namespace std;
int main()
{
	vector <int>a(SIZE);
	int i,n;
	cout<<endl<<"Enter array elements=";
	for(i=0;i<SIZE;i++)
		cin>>a[i];
	cout<<endl<<"Elements are=";
	for(i=0;i<SIZE;i++)
		cout<<" "<<a[i];
	return 0;
}
