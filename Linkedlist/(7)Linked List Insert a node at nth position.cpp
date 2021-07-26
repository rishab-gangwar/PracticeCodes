#include<stdio.h>
#include<stdlib.h>
#include<new>
using namespace std;
struct node
{ int data;
struct node* next;
	
};
struct  node* head;
void insert(int x,int n)
{   int i=0;
	struct node* temp1;
	temp1= new node();
	temp1->data=x;
	temp1->next=NULL;
	if(n==1)
	{
		temp1->next=head;
		head=temp1;
		return;
	}
	struct node* temp2=head;
	for(i=0;i<n-2;i++)
	{
		temp2=temp2->next;
	}
	temp1->next=temp2->next;//2 1 *6 4 5 <6 is to be entered at 3>
	temp2->next=temp1;
}
void print()
{struct node* temp=head;
printf("the list is:");
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
int x,n,z,i;
printf("tap 0 to exit and 1 to continue to add to list:\n");
scanf("%d",&i);
while(i)
{

printf("enter the no. and its pos\n");
scanf("%d %d",&x,&n);
insert(x,n);
print();
printf("tap 0 to exit and 1 to continue to add to list:\n");
scanf("%d",&i);
}	return 0;
}
