#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter array size=";
	cin>>n;
	vector<int>a;
	a.resize(n);
	cout<<endl<<"Enter array elements=";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<endl<<"The array elements are---"<<endl;
	for(i=0;i<n;i++)
		cout<<" "<<a[i];
	return 0;
}
