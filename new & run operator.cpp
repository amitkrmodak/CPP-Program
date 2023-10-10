#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *arr;
	int size;
	cout<<"Enter the size of an integer array=";
	cin>>size;
	cout<<"Creating an array of size"<<size<<"--------";
	arr=new int [size];
	cout<<"Sucessful";
	cout<<"arr="<<arr;
	delete arr;
	
	return 0;
}
