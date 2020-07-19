
#include"iostream"
#include"singly.h"
using namespace std;
int main()
{
	
	Node *head;
	head=new Node;
	head=NULL;
	
	int ch,no, pos,ans,num,i;
	do
	{
		cout<<"\n1.Create\n2.insert\n3.delete\n4.search\n5.reverese\n6.display\n";
		cout<<"\n======================================================"<<endl;
		cout<<"\nEnert the choice::";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nenter the number of node to create::";
				cin>>no;
				cout<<"\nEnter the element to:";
				for( i=0;i<no;i++)
				{
					
					cin>>num;
					head=create(head,num);

	
				}		
				break;
			case 2:
				cout<<"\nenter the element and position to insert";
				cin>>num>>pos;
				head=insert(head,num,pos);
				break;
			case 3:
				cout<<"\nenter the position u want to delete:";
				cin>>pos;
				head=deletenode(head,pos);
				break;
			case 4:
				cout<<"\nEnter the element to search:";
				cin>>num;
				ans=search(head,num);
				if(ans==0)
					cout<<"\nElement not found";
				else
					cout<<"\nElement is found at position "<<ans;
				break;
			case 5:
				head=reverse(head);
				cout<<"\nReveresed Linked List is ::\n";
				show(head);
			case 6:
				cout<<"\nLinked list is ::\n";
				show(head);
		}
	}while(ch!=0);
}
