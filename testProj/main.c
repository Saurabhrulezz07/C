#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>
struct stackStruct
{
int size;
int *stack;
int top;
};
struct stackStruct * createStack(int size)
{
struct stackStruct *S=malloc(sizeof(struct stackStruct));
if(S==NULL)
{
	printf("Error in creating stack");
    exit(0);
}
S->size=size;
S->stack=(int *)malloc(4*sizeof(int));
if(S->stack==NULL)
{
	printf("Error in creating stack");
	exit(0);
}
S->top=-1;
return S;
}
bool isFull(struct stackStruct *S)
{
	if(S->top==S->size-1)
		return true;
	else
		return false;
}
bool isEmpty(struct stackStruct *S)
{
	if(S->top<0)
		return true;
	else
		return false;
}
struct stackStruct * push(struct stackStruct *S,int val)
{
if(isFull(S))
{	printf("Stack Overflow");
	return;
}
S->stack[++(S->top)]=val;
return S;
}
int pop(struct stackStruct *S)
{
if(isEmpty(S))
{
	printf("Stack Underflow");
	return;
}
return S->stack[(S->top)--];
}
void displayStack(struct stackStruct *S)
{
	int i;
	printf("Stack Contents are\n");
	for(i=S->top;i>=0;i--)
	{
		printf("%d\n",S->stack[i]);
	}
}
struct stackStruct * reverseStack(struct stackStruct *S)
{
	if(S->top<0)
		return -1;
	int item=pop(S);
	(S->top)--;
	reverseStack(S);
	push(S,item);
	return S;
}
int main()
{
	struct stackStruct *S;
	S=createStack(5);
	for(int i=1;i<=5;i++)
		push(S,i);
	displayStack(S);
	reverseStack(S);
	displayStack(S);
	return 0;
}
