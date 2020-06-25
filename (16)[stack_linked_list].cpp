#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
	
};
struct node* head;
struct node* createnode(int num)
{
	struct node* temp=new node();
	temp->data=num;
	temp->next=NULL;
	return temp;
		
	
}
void push(int num)
{
	struct node* temp=head;
	struct node* newnode=createnode(num);
	if(temp==NULL)
	{head=newnode;
	return;
	}
	newnode->next=temp;
	head=newnode;
		
}

void pop()
{
struct node* temp;
temp=head;
head=head->next;
delete temp;	
}
void print()
{
struct node* temp=head;
 while(temp!=NULL)
 {
 	printf("%d ",temp->data);
 	temp=temp->next;
 }
 printf("\n");
}
int main()
{
	head=NULL;
	push(5);
	push(6);
	push(7);
	push(8);
	push(9);
	push(10);
	print();
	pop();
	print();
	pop();
	print();
	pop();
	print();
	pop();
	print();
	
	return 0;
	
	
	
}

