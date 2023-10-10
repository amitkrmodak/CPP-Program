#include<iostream>
using namespace std;
class Node
{
	private:
		int val;
		Node *ptr;
	public:
		Node(int a=-1)
		{
			val=a;
			ptr=NULL;
		}
	friend class LList;
};
class LList
{
	private:
		Node *hnode, *pnode, *cnode, *nnode;
		int flg,dat;
	public:
		LList()
		{
			hnode=new Node();
		}
		void input()
		{
			pnode=hnode;
			while(true)
			{
				cout<<"Enter 1 to insert a node"<<endl;
				cout<<"Enter 0 to stop insertion"<<endl;
				cout<<"Enter your choice=";
				cin>>flg;
				if(flg==0)
					break;
				else
				{
					cout<<"Enter the value to insert=";
					cin>>dat;
					cnode= new Node(dat);
					pnode->ptr=cnode;
					pnode=cnode;
				}
			}
		}
		void output()
		{
			cout<<endl<<"-----------"<<endl<<"The linked list is----"<<endl;
			cnode= hnode->ptr;
			while(cnode!=NULL)
			{
				cout<<" "<<cnode->val;
				cnode=cnode->ptr;
			}
		}
		void reverse()
		{
			pnode=NULL;
			cnode=hnode->ptr;
			while(cnode!=NULL)
			{
				nnode=cnode->ptr;
				cnode->ptr=pnode;
				pnode=cnode;
				cnode=nnode;
			}
			hnode->ptr=pnode;
		}
};
int main()
{
	LList list;
	list.input();
	list.reverse();
	list.output();
} 
