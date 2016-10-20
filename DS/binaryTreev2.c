#include<stdio.h>
#include<stdlib.h>
struct binaryTree
{
	struct binaryTree *left;
        int info;
        struct binaryTree *right;
};
typedef struct binaryTree bt;
bt * makeNode(int info);
void insertNode(bt **ptr,int data,bt *father);
void inorderTraversal(bt *ptr);
void preorderTraversal(bt *ptr);
void postorderTraversal(bt *ptr);
int main()
{
	bt *root=NULL;
	insertNode(&root,1,NULL);
	insertNode(&root,2,NULL);
	insertNode(&root,3,NULL);
	insertNode(&root,4,NULL);
	insertNode(&root,5,NULL);
	insertNode(&root,6,NULL);
	insertNode(&root,7,NULL);
	insertNode(&root,8,NULL);
	insertNode(&root,9,NULL);
	/*insertNode(&root,10,NULL);
	insertNode(&root,11,NULL);
	insertNode(&root,12,NULL);*/
	printf("Info->%d\n",((root->left)->left)->info);
	printf("Inorder Traversal:\n");
	inorderTraversal(root);
        printf("Preorder Travesal:\n");
	preorderTraversal(root);
	printf("Postorder Traversal\n");
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
void insertNode(bt **ptr,int data,bt *father)//ptr will be pointing to root node of tree
{
	bt *temp;
	temp=makeNode(data);
	if(*ptr==NULL)//Tree is empty
		(*ptr)=temp;
	else if((*ptr)->left==NULL)
		(*ptr)->left=temp;
	else if((*ptr)->right==NULL)
		(*ptr)->right=temp;
	else if(father!=NULL&&(father->right)->left==NULL)
		(father->right)->left=temp;
	else if(father!=NULL&&(father->right)->right==NULL)
		(father->right)->right=temp;
	else if((*ptr)->left!=NULL)
		insertNode(&((*ptr)->left),data,*ptr);
	else insertNode(&((*ptr)->right),data,*ptr);
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
