#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int i,n,k;
	cout<<"Enter array elements=";
	cin>>n;
	vector <int>a;
	a.resize(n);
	cout<<endl<<"Enter array elements=";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<endl<<"Elements are=";
	for(i=0;i<n;i++)
		cout<<" "<<a[i];
	//int a[]={10,20,30,40,50};
	cout<<"endl"<<"Enter the number you want to search=";
	cin>>k;
	if(binary_search(a,a+n,k))
		cout<<endl <<k<<"is in the list";
	else
		cout<<endl<<k<<"is in not the list";
	return 0;
}
