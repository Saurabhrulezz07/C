/* This program uses insertion at begining */
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
}*head, *temp;
int main()
{  int ch=-1;
   do
   {    temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter value of node\n");
	scanf("%d",&((*temp).data));
	if(ch==-1)
	{
		temp->next=NULL;
	}
	else
	{
		temp->next=head;	
	}
	head=temp;
	printf("Do you want to add more nodes\n");
	getchar();
	ch=getchar();
        putchar(ch);
   }while(ch=='y'||ch=='Y');
   temp=head;
   while(temp!=NULL)
   {
  	printf("%d-> ",temp->data);
        temp=temp->next;
   }
   printf("\n");
}
