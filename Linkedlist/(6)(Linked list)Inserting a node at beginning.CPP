//mycodeschool
//Linked List : Inserting a node at beginning
#include<stdlib.h>
#include<stdio.h>
struct Node
{
	int data;
	struct Node* next;
};
struct Node* head;//global variable, can be accessed any where
void insert(int num)
{
	struct Node* temp=(Node*)malloc(sizeof(struct Node));
	temp->data=num;
	temp->next=head;
	head=temp;
	
	
}
void print()
{   struct Node* temp=head;
	printf("the List is:\n");
	while(temp != NULL)
	{
		
		printf("%d",temp->data);
		temp=temp->next;
		
	}
	printf("\n");
	
	
}
int main()
	{
	head=NULL;//empty list
	printf("How many numbers:\n");
	int n,x,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the number:\n");
		scanf("%d",&x);
		insert(x);
		print();
		
	}	
}
