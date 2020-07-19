#include"iostream"
using namespace std;
class Node {
	public:
	int data;
	Node *next;
};
Node *create(Node *head,int num)
{
	Node *newnode;
	Node *temp;
	newnode=new Node;
	newnode->data=num;
	newnode->next=NULL;	
	if(head==NULL)
	{
		head=newnode;
		temp=newnode;
	}
	else 
	{
				
				temp->next=newnode;
				temp=newnode;
				
	}
	
	return head;
}
Node *insert(Node *head,int num,int pos)
{
	Node *newnode,*temp=head;
	int i=1;
	newnode=new Node;
	newnode->data=num;
	if (pos==1)
	{
		newnode->next=head;
		head=newnode;
	}
	else
	{
	while(temp->next!=NULL && i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	
	newnode->next=temp->next;
	temp->next=newnode;
	
}
return head;
}
void show(Node *head)
{
	cout<<endl;
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head=head->next;
	}
	
}
Node  *deletenode(Node *head,int pos)
{
	Node *temp=head;
	Node *p;
	int i=1;
	if(pos==1)
	{
		p=head;
		head=head->next;
		delete p;
	}
	else {
	while(temp->next->next!=NULL && i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	p=temp->next;
	temp->next=temp->next->next;
	delete p;
	
}
return head;
}
int  search(Node *head,int num)
{
	int pos=1;
	Node *temp=head;
	while(temp!=NULL)
	{
		if(temp->data==num)
			return pos;
		temp=temp->next;
		pos++;
	}
	return 0;
}

Node *reverse(Node *head)
{
	Node *N=NULL;
	Node *temp=head;
	Node *prev=NULL;
	while(temp!=NULL)
	{
		N=temp->next;
		temp->next=prev;
		prev=temp;
		temp=N;
		
	}
	head=prev;
	
	
	return head;
}
