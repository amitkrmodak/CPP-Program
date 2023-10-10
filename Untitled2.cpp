#include<iostream>
#include<iomanip>
using namespace std;
class exam{
	int u_ans[20],c_ans[20];
	static int marks,i;
	char name[];
	public:
		void cal();
		void name_in();
		void display();
		void question(int);
		void ans_check();
};
void exam :: cal()
{
	int n,k,l;
	for(k=0;k<20;k++)
	{
		l=k+1;
		cout<<endl<<"Your "<<l<<" question---"<<endl;
		question(l);
		cout<<endl<<"Enter your option otherwise enter 0 to skip this answer";
		cout<<endl<<"Enter your answer=";
		cin>>u_ans[k];
	}
	cout<<endl<<"Press 1 for display";
	cout<<endl<<"Press 2 for upgrade";
	cout<<endl<<"Enter your choice";
	cin>>n;
	if(n==1)
	{
		display();
	}
}
void exam :: question(int n)
{
	switch(n)
	{
		case 1:
			cout<<"When the 1st World war start?";
			cout<<endl<<setw(5)<<"1> September 1,1939"<<setw(5)<<"2> November 11,1914";
			cout<<endl<<setw(5)<<"3> July 28,1914"<<setw(5)<<"4> June 26,1914";
			c_ans[i++]=3;
			break;
		case 2:
			cout<<"In 1860 in which state Petrolium was first discoverd in India?";
			cout<<endl<<setw(5)<<"1> Madhya Pradesh"<<setw(5)<<"2> Assam";
			cout<<endl<<setw(5)<<"3> Jharkhand"<<setw(5)<<"4> Bihar";
			c_ans[i++]=2;
			break;
		case 3:
			cout<<"Which country first introduce constitution?";
			cout<<endl<<setw(5)<<"1> USA"<<setw(5)<<"2> Japan";
			cout<<endl<<setw(5)<<"3> England"<<setw(5)<<"4> China";
			c_ans[i++]=1;
			break;
		case 4:
			cout<<"Out of total blood capacity,what is persentage of Plasma?";
			cout<<endl<<setw(5)<<"1> 60"<<setw(5)<<"2> 40%";
			cout<<endl<<setw(5)<<"3> 70"<<setw(5)<<"4> None of these";
			c_ans[i++]=1;
			break;
		case 5:
			cout<<"Which date is delared as income tax day in India?";
			cout<<endl<<setw(5)<<"1> May 12"<<setw(5)<<"2> August 29";
			cout<<endl<<setw(5)<<"3> March 6"<<setw(5)<<"4> July 24";
			c_ans[i++]=4;
			break;
		case 6:
			cout<<"Which device Douglas Engelbart invent?";
			cout<<endl<<setw(5)<<"1> Memory card"<<setw(5)<<"2> Computer Mouse";
			cout<<endl<<setw(5)<<"3> Joystick"<<setw(5)<<"4> None of these";
			c_ans[i++]=2;
			break;
		case 7:
			cout<<"When Bhoodan Movement was started?";
			cout<<endl<<setw(5)<<"1> April 10,1953"<<setw(5)<<"2> January 23,1955";
			cout<<endl<<setw(5)<<"3> April 27,1953"<<setw(5)<<"4> April 18,1951";
			c_ans[i++]=4;
			break;
		case 8:
			cout<<"After Hindi, which is most used language in india?";
			cout<<endl<<setw(5)<<"1> Bengali"<<setw(5)<<"2> Tamil";
			cout<<endl<<setw(5)<<"3> Telegu"<<setw(5)<<"4> Rajasthani";
			c_ans[i++]=1;
			break;
		case 9:
			cout<<"Which is called the 'Water Tower' of the Ganga River?";
			cout<<endl<<setw(5)<<"1> Uttarakhand"<<setw(5)<<"2> Haridwar";
			cout<<endl<<setw(5)<<"3> Rishikesh"<<setw(5)<<"4> Nepal";
			c_ans[i++]=4;
			break;
		case 10:
			cout<<"With which game Copa America is associated?";
			cout<<endl<<setw(5)<<"1> Tenis"<<setw(5)<<"2> Golf";
			cout<<endl<<setw(5)<<"3> Football"<<setw(5)<<"4> None of these";
			c_ans[i++]=3;
			break;
		case 11:
			cout<<"Which Mughal king built Jama Masjid?";
			cout<<endl<<setw(5)<<"1> Akbar"<<setw(5)<<"2> Shah Jahan";
			cout<<endl<<setw(5)<<"3> Aurangzeb"<<setw(5)<<"4> Jahangir";
			c_ans[i++]=2;
			break;
		case 12:
			cout<<"In China when Red Revolution took place?";
			cout<<endl<<setw(5)<<"1> 1949"<<setw(5)<<"2> 1945";
			cout<<endl<<setw(5)<<"3> 1946"<<setw(5)<<"4> 1950";
			c_ans[i++]=1;
			break;
		case 13:
			cout<<"What is the normal blood pressure of human?";
			cout<<endl<<setw(5)<<"1> 120/80"<<setw(5)<<"2> 100/70";
			cout<<endl<<setw(5)<<"3> 120/70"<<setw(5)<<"4> 100/70";
			c_ans[i++]=1;
			break;
		case 14:
			cout<<"Which country is not parmanent member of the United Nation Security council?";
			cout<<endl<<setw(5)<<"1> France"<<setw(5)<<"2> China";
			cout<<endl<<setw(5)<<"3> Japan"<<setw(5)<<"4> None of these";
			c_ans[i++]=3;
			break;
		case 15:
			cout<<"Which is in first position for producing milk in the world?";
			cout<<endl<<setw(5)<<"1> Austraila"<<setw(5)<<"2> India";
			cout<<endl<<setw(5)<<"3> Srilanka"<<setw(5)<<"4> England";
			c_ans[i++]=2;
			break;
		case 16:
			cout<<"In which year the freedom fighter Sukhdev Sing was hanged?";
			cout<<endl<<setw(5)<<"1> 1934"<<setw(5)<<"2> 1932";
			cout<<endl<<setw(5)<<"3> 1933"<<setw(5)<<"4> 1931";
			c_ans[i++]=4;
			break;
		case 17:
			cout<<"In which year partition of Bengal was cancelled?";
			cout<<endl<<setw(5)<<"1> 1918"<<setw(5)<<"2> 1915";
			cout<<endl<<setw(5)<<"3> 1910"<<setw(5)<<"4> 1911";
			c_ans[i++]=4;
			break;
		case 18:
			cout<<"Through Radcliffe Line Which country was seperated by India?";
			cout<<endl<<setw(5)<<"1> Pakistan"<<setw(5)<<"2> Nepal";
			cout<<endl<<setw(5)<<"3> China"<<setw(5)<<"4> Bhutan";
			c_ans[i++]=1;
			break;
		case 19:
			cout<<"Where the famouse Sun Temple is situated?";
			cout<<endl<<setw(5)<<"1> Nalanda"<<setw(5)<<"2> Agra";
			cout<<endl<<setw(5)<<"3> Konark"<<setw(5)<<"4> Delhi";
			c_ans[i++]=3;
			break;
		case 20:
			cout<<"Who is the writer of 'Post Office'?";
			cout<<endl<<setw(5)<<"1> Kazi Nazrul Islam"<<setw(5)<<"2> Jibananda Das";
			cout<<endl<<setw(5)<<"3> Rabindranath Tagore"<<setw(5)<<"4> Sukumar Ray";
			c_ans[i++]=3;
			break;
	}
}
void exam :: name_in()
{
	cout<<"Enter your name=";
	cin>>name;
	cout<<"Mr "<<name<<" Lets start your exam";
}
int main()
{
	exam obj;
	obj.name_in();
	return 0;
}
