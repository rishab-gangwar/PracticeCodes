#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* prev;
	struct node* next;
	
};
struct node* head;
struct node* createnode(int x)
{
	struct node* temp=new node();
	temp->data=x;
	temp->prev=NULL;
	temp->next=NULL;
	return temp;
	
}
void InsertAtHead(int num)
{
	struct node* temp=createnode(num);
	if(head==NULL)
	{
		head=temp;
		return;
	}
	head->prev=temp;
	temp->next=head;
	head=temp;
	
}
void printforward()
{ struct node* temp=head;
	while(temp!=NULL)
	{
		
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
}
void printbackwards()
{
struct node* temp=head;
printf("reverse of list is:\n");
	while(temp->next!=NULL)
	{ temp=temp->next;
	}
	while(temp!=NULL)
	{
	printf("%d ",temp->data);
	temp=temp->prev;
	}
}
void InsertAtTail(int num)
{
		struct node* nnode=createnode(num);
		struct node* temp=head;
		
	if(head==NULL)
	{
		head=nnode;
		return;
	}
	while(temp->next!=NULL)
	{ 
	temp=temp->next;
	}
	temp->next=nnode;
	nnode->prev=temp;
	nnode->next=NULL;
	
	
}
int main()
{ head=NULL;
InsertAtHead(8);
printforward();//8
InsertAtHead(9);
printforward();//9 8
InsertAtTail(10);
printforward();//9 8 10
InsertAtHead(11);
printforward();//11 9 8 10
InsertAtTail(12);
printforward();//11 9 8 12
InsertAtHead(13);
printforward();//13 11 9 8 12
printbackwards();//12 8 9 11 13
return 0;
}
