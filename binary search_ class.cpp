#include<iostream>
#include<algorithm>
using namespace std;
class bsearch
{
	int *arr,lb,ub,key;
	public:
		void getdata();
		int search();
};
void bsearch :: getdata()
{
	int i,n;
	cout<<endl<<"Enter number of the elements=";
	cin>>n;
	arr=new int(n);
	lb=0,ub=n-1;
	cout<<"Enter the element";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<endl<<"After sorting......"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"Enter key element=";
	cin>>key;
}
int bsearch :: search()
{
	int mid;
	if(lb>ub)
		return(-1);
	mid=(lb+ub)/2;
	if(arr[mid]==key)
		return mid;
	else if(arr[mid]>key)
		ub=mid-1;
	else
		lb=mid+1;
	search();
}
int main()
{
	int res;
	class bsearch p;
	p.getdata();
	res=p.search();
	if(res>=0)
		cout<<endl<<"The number is in the list";
	else
		cout<<endl<<"the number is not in the list";
	return 0;
}
