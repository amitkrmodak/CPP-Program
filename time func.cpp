#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
	long int stime=0;
	long int etime=0;
	long int eltime=0;
	cout<<"Time funcrions"<<endl;
	stime = time(NULL);
	cout<<"Time="<<stime<<endl;
	cout<<"Size"<<sizeof(time(NULL))<<endl;
	return 0;
}
