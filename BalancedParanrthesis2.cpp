 		/*C++ Program to Check for balanced parantheses by using Stacks*/
#include<iostream>
#include<string.h>    /* used for string operation*/
using namespace std;
class stack
{
		char *ch,*arr;	//private members
		int top=-1,size=40; /*max size of the array is 20 */
		void push(char);
		char pop();
	public :
		stack();
		int cal() ;
		~stack();
		
};
stack :: stack() /*constructor*/
{
	ch=new char[size];
	cout<<"Enter the expression=";
	cin>>ch;
	size=strlen(ch);
	arr=new char[size]; 
}

void stack :: push(char c) 
{
	arr[++top]=c;
}

char stack :: pop() 
{
	return(arr[top--]);
}

int stack :: cal() 
{
	for (int i=0;i<size;i++) 
	{ 
		if (ch[i]=='('||ch[i]=='['||ch[i]=='{') 
		{ 
			push(ch[i]);	// push into stack 
			continue; 
		}
		if(top==-1) 
			return 2;	//No parantheses is used
		if(ch[i]==')')
		{
			if (arr[top]=='{' || arr[top]=='[') 
				return 0;	/*corrosponding end parantheses not found*/
			pop(); 
			break; 
		}
		if(ch[i]=='}')
		{
			if (arr[top]=='(' || arr[top]=='[') 
				return 0;	/*corrosponding end parantheses not found*/
			pop(); 
			break; 
		}
		if(ch[i]=='}')
		{
			if (arr[top]=='(' || arr[top]=='{') 
				return 0;	/*corrosponding end parantheses not found*/
			pop(); 
			break; 
		}
	}
	return (1); //return 1 if the parantheses
}

stack :: ~stack() /*destructor*/
{
	delete[] ch;
	delete [] arr;
}

int main()
{
	stack st; /*creating object of the stack class*/
	int res=st.cal();
	if(res==1)
		cout<<" Balanced Parantheses";
	else if(res==2)
		cout<<" No parantheses";
	else
		cout<<" Unbalanced Parantheses";
	return 0;
}


/* 	OUTPUT:-
		
		Enter the expression=[{(20+2)(67-44)}{{(3*5)}(3*10)()}][()]
 		 Balanced Parantheses
*/								
