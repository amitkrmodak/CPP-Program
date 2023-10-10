
#include<bits/stdc++.h> 
using namespace std; 

bool areParanthesisBalanced(string expr) 
{ 
	stack<char> s; 
	char x;  
	for (int i=0; i<expr.length(); i++) 
	{ 
		if (expr[i]=='('||expr[i]=='['||expr[i]=='{') 
		{
			s.push(expr[i]); 
			continue; 
		} 
		if (s.empty()) 
		return false; 

		switch (expr[i]) 
		{ 
		case ')': 
			x = s.top(); 
			if (x=='{' || x=='[') 
				return false; 
			s.pop();
			break; 

		case '}':
			x = s.top(); 
			if (x=='(' || x=='[') 
				return false; 
			s.pop();
			break; 

		case ']': 
			x = s.top(); 
			 
			if (x =='(' || x == '{') 
				return false; 
			s.pop();
			break; 
		} 
	}
	return (s.empty()); 
} 

int main() 
{ 
	char ch[10];
	cout<<"Enter the expression=";
	cin>>ch;
	cout<<areParanthesisBalanced(ch)<<endl;
	if (areParanthesisBalanced(ch)) 
		cout << "Balanced"; 
	else
		cout << "Not Balanced"; 
	return 0; 
} 

