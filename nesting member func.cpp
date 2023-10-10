#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class binary
{
	string s;
	public:
		void read(void);
		void check(void);
		void one(void);
		void display(void);
};
void binary :: read(void)
{
			cout<<"Enter a binary number";
			cin>>s;
}
void binary ::check(void)
		{
			for(int i=0;i<s.length();i++)
			{
				if(s.at(i)!='0'&&s.at(i)!='1')
				{
					cout<<"\nIncorrect binary number";
					exit(1);
				}
			}
		}
		void binary ::one(void)
		{
			check();
			for(int i=0;i<s.length();i++)
			{
				if(s.at(i)=='0')
					s.at(i)='1';
				else
					s.at(i)='0';
			}
		}
		void binary ::display(void)
		{
			one();
			cout<<"\n1's complement of the binary number="<<s;
		}
int main()
{
	binary b;
	b.read();
	b.display();
	return 0;
}
