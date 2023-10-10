#include<iostream>
#include<conio.h>>
using namespace std;
int main()
{
	int *a,size;
	cout<<"Enter the size of the arrey=";
	cin>>size;
	a=new int(size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n------------\n");
	for(int i=0;i<size;i++)
	{
		printf("%5d",a[i]);
	}
	delete a;
	printf("\n\nAfter delete the arrey-------------\n");
	for(int i=0;i<size;i++)
	{
		printf("%10d",a[i]);
	}
	return 0;
}
