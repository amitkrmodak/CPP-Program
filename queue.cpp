#include<iostream>
#include<iomanip>
using namespace std;
class IntArray
{
	protected:
    	int *arr,size;  //protected
	public: 	
	  	IntArray(int s); //Constructor
		~IntArray(); //Destructor
		class SIZE {};     //empty class
};
//Constructor
IntArray:: IntArray (int s)
{
	if ( s > 0 )
	{
		size=s;
		arr=new int[size];
		cout<< "\n Base class constructor called" << endl;
	}
	else
		 throw SIZE();
}
//Destructor
IntArray:: ~IntArray()
{
	 delete [] arr;
	 cout <<"\n Base class Destructor called" <<endl;
}

class Cqueue:private IntArray
 {
	int rear,front;
	public:
		Cqueue(int s); //Constructor
		~Cqueue();    //Destructor
		void EnCqueue();	
		void DeCqueue();	
		void CqShow();
};
Cqueue::Cqueue(int s):IntArray(s)
{
	rear=0;
	front=0;
	cout <<"\n Derived class Constructor called" <<endl;
}

Cqueue :: ~Cqueue()
{
	cout<< "\n Derived class destructor called"<<endl;
}

void Cqueue::CqShow()
{
	if(rear == front)
		cout << " Queue is Empty " << endl;
	else
	{
		cout << "\n Elements of Queue --> ";
		int i=front;
		while ( i != rear )
		{
			i=(i+1)%size;
			cout << arr[i]<< " ";
		}
		cout << endl;
	}
}

void Cqueue::EnCqueue()
{
	int index=(rear+1)%size;
	if( index == front )
		cout << " Queue is Full " << endl;
	else
	{
		cout <<"Enter the element to insert:";
		int val;
		cin>> val;
		rear=index;
		arr[rear]=val;
	}
}

void Cqueue:: DeCqueue()
{
  if( rear == front )
	cout << " Queue is Empty " << endl;
  else
  {
	front=(front+1)%size;
	cout << " Deleted Element is " << arr[front];
  }
}

int main()
{
  int n;
  cout << "Enter the size of the queue :" ;
  cin>>n;

  try
  {
			Cqueue que(n);
			int ch;
			while(1)
			{
				cout << " \n\nEnter Your Choice:" << endl;
				cout << " 1. For Queue Insert Operation " << endl;
				cout << " 2. For Queue Delete Operation " << endl;
				cout << " 3. For Display  " << endl;
				cout << " Other for Exit " << endl;

				cin >>ch;

				switch(ch)
				{
					case 1: que.EnCqueue();
								break;
					case 2: que.DeCqueue();
								break;
					case 3: que.CqShow();
								break;
					default:   ;
				}
			}
  }
  catch(IntArray::SIZE)
  {
			cout <<"Error:";
			cout <<"Array Size is Zero or Negative" << endl;
  }
  return 0;
}
