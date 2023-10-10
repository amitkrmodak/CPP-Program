#include <iostream>
using namespace std;
class Node
{
	private:
			int val;
		Node *link;
	public:
		Node(int a = -1)
		{
			val = a;
			link = NULL;
		}
	friend class LList;
};
class LList
{
	private:
		Node *hnode,*pnode,*cnode;
		int flg,dat;
	public:
		LList()
		{
			hnode = new Node;
		}
		void insert_end()
		{
			pnode = hnode;
			while(pnode -> link != NULL)
			{
				pnode = pnode->link;
			}
			while(true)
			{
				cout << "Do you want to insert an item at the end of the Linked List (0/1) : ";
				cin >> flg;
				if(flg == 0)
				{
					break;
				}
				cout << "Enter the value to insert : ";
				cin >> dat;
				cnode = new Node(dat);
				pnode->link = cnode;
				pnode = cnode;
			}
		}
		void insert_search(int sch)
		{
			pnode = hnode;
			while(pnode -> link != NULL && pnode -> val != sch)
			{
				pnode = pnode->link;
			}
			if(pnode -> val != sch)
			{
				cout << "Value not Found !" << endl;
			}
			else
			{
				while(true)
				{
					cout << sch << " Found." << endl;
					cout << "Do you want to insert an item (0/1) : ";
					cin >> flg;
					if(flg == 0)
					{
						break;
					}
					cout << "Enter the value to insert : ";
					cin >> dat;
					cnode = new Node(dat);
					cnode->link = pnode->link;
					pnode->link = cnode;
					pnode = cnode;
				}
			}
		}
		void insert_begin()
		{
			pnode = hnode;
			while(true)
			{
				cout << "Do you want to insert an item at the begining of the Linked List (0/1) : ";
				cin >> flg;
				if(flg == 0)
				{
					break;
				}
				cout << "Enter the value to insert : ";
				cin >> dat;
				cnode = new Node(dat);
				cnode->link = pnode->link;
				pnode->link = cnode;
				pnode = cnode;
			}
		}
		int extract()
		{
			if(hnode -> link == NULL)
			{
				cout << "The list is empty !" << endl;
				return 0;
			}
			cout << "The Content of the List is : " << endl;
			cnode = hnode->link;
			while(cnode != NULL)
			{
				cout << cnode->val << endl;
				cnode = cnode->link;
			}
			return 0;
		}
};
int main()
{
	char che;
	LList *list;
	bool flg = false;
	cout << "This is a basic Linked List implementation." << endl;
	while(true)
	{
		cout << "Available Operations :" << endl;
		cout << endl;
		cout << "a) Create Linked List" << endl;
		cout << "b) Insert items at the begining" << endl;
		cout << "c) Insert items after an certain element" << endl;
		cout << "d) Insert Items at the end" << endl;
		cout << "e) Show the list" << endl;
		cout << "f) exit" << endl;
		cout << endl;
		cout << "Your Choice : ";
		cin >> che;
		if(flg == false)
		{
			if(che == 'a')
			{
				list = new LList();
				cout << "Link List Created !" << endl;
				flg = true;
			}
			else if(che == 'b' || che == 'c' || che == 'd' || che == 'e')
			{
				cout << "Please create a Linked List first." << endl;
			}
			else if( che == 'f' )
			{
				return 0;
			}
			else
			{
				cout << "Invalid Input ! Please Try Again." << endl;
			}
		}
		else
		{
			if(che == 'a')
			{
				cout << "No Need ! Linked List already exists." << endl;
			}
			else if(che == 'b')
			{
				list->insert_begin();
			}
			else if(che == 'c')
			{
				int sch;
				cout << "\nAfter which item ?" << endl;
				cin >> sch;
				list->insert_search(sch);
			}
			else if(che == 'd')
			{
				list->insert_end();
			}
			else if(che == 'e')
			{
				list->extract();
			}
			else if(che == 'f')
			{
				return 0;
			}
			else
			{
				cout << "Invalid Input ! Please Try Again." << endl;
			}
		}	
	}
	return 0;
}
