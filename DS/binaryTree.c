/************************************************
* Written by Anubhav Patrick			*
* on 5th Nov, 2015				*
* It simulates Binary Tree (not BST) DS in C	*
* Along with some basic operations		*
*************************************************/
#include<stdio.h>
#include<stdlib.h>
#define MAX_NODES 100
struct binaryTree
{
	struct binaryTree *left;
        int info;
        struct binaryTree *right;
};
typedef struct binaryTree bt;
bt * makeNode(int info);
void insertNode(bt **ptr,int data);
void inorderTraversal(bt *ptr);
void preorderTraversal(bt *ptr);
void postorderTraversal(bt *ptr);
int main()
{
	bt *root=NULL;
	insertNode(&root,1);
	insertNode(&root,2);
	insertNode(&root,3);
	insertNode(&root,4);
	insertNode(&root,5);
	insertNode(&root,6);
	insertNode(&root,7);
	insertNode(&root,8);
	insertNode(&root,9);
	insertNode(&root,10);
	insertNode(&root,11);
	insertNode(&root,12);
	printf("Inorder Traversal:\n");
	inorderTraversal(root);
        printf("\nPreorder Travesal:\n");
	preorderTraversal(root);
	printf("\nPostorder Traversal\n");
	postorderTraversal(root);
	return 0;
}
bt * makeNode(int info)
{
	bt *temp=NULL;
	temp=(bt *) malloc(sizeof(bt));
	temp->info=info;
	temp->left=temp->right=NULL;
	return temp;
}
void insertNode(bt **ptr,int data)//ptr will be pointing to root node of tree
{
	bt *temp,*queue[MAX_NODES];
	int front=-1,rear=-1,i;
	temp=makeNode(data);
	if(*ptr==NULL)
	{
		*ptr=temp;
		(*ptr)->left=NULL;
		(*ptr)->right=NULL;
	}
	else
	{
		/* We are trying to insert elements in binary tree
		in similar fashion as almost complete binary tree */
		front=rear=0;
		queue[rear++]=*ptr;
		while(front<=rear)
		{
			if(queue[front]->left==NULL)
		        {	queue[front]->left=temp;
				break;
			}
			else
				queue[rear++]=queue[front]->left;
			if(queue[front]->right==NULL)
			{	queue[front]->right=temp;
				break;
			}
			else
				queue[rear++]=queue[front]->right;	
			front++;
		}
		
			/*printf("Queue: ");
			for(i=front;i<=rear;i++)
				printf("%d\t",queue[i]->info);
			printf("\n");*/
		
	}
		
}
void inorderTraversal(bt *ptr)//ptr will be pointing to root node of tree
{
	if(ptr==NULL)
		return;
	if(ptr->left!=NULL)
	{	inorderTraversal(ptr->left);
        	printf("%d\t",ptr->info);
        }
	if(ptr->right!=NULL)
		inorderTraversal(ptr->right);
        if(ptr->left==NULL&&ptr->right==NULL)
		printf("%d\t",ptr->info);
	
}
void preorderTraversal(bt *ptr)// ptr will be pointing to root node of tree
{
	if(ptr==NULL)
		return;
	else
	{
		printf("%d\t",ptr->info);
		preorderTraversal(ptr->left);
		preorderTraversal(ptr->right);
	}
}
void postorderTraversal(bt *ptr)//ptr will be pointing to root node of tree
{
	if(ptr==NULL)
		return;
	else
	{
		postorderTraversal(ptr->left);
		postorderTraversal(ptr->right);
		printf("%d\t",ptr->info);
	}
}
