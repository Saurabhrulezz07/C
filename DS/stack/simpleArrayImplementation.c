/* taken from page 81, Narsimha Karumanchi */
#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
struct simpleArrayStack
{
    int top;   //top will store the number of elements in stack
    int capacity;  //it will store total number of stack elements
    int *array;   //this is actual stack
};
struct simpleArrayStack * createStack(int capacity)
{
    struct simpleArrayStack *S=(struct simpleArrayStack *)malloc(sizeof(struct simpleArrayStack));
    if(S==NULL)
    {
        printf("Error in creating simpleArrayStack\n");
        exit(0);
    }
    S->top=-1;   //There are no elements in stack
    S->capacity=capacity;
    S->array=(int *)malloc(S->capacity*sizeof(int));
    if(S->array==NULL)
    {
         printf("Error in creating array");
         exit(0);
    }
    return S;
}
bool isFullStack(struct simpleArrayStack *S)
{
    if(S->top==S->capacity-1) //because we are counting stack elements from 0
        return true;
    else return false;
}
bool isEmptyStack(struct simpleArrayStack *S)
{
    if(S->top==-1)
        return true;
    else return false;
}
void push(struct simpleArrayStack *S, int val)
{
    if(isFullStack(S))
        return;
    S->array[++S->top]=val;
}
int pop(struct simpleArrayStack *S)
{
    int val;
    if(isEmptyStack(S))
        return NULL;
    val=S->array[(S->top)--];
    return val;
}
int displayStack(struct simpleArrayStack *S)
{
    int i;
    printf("Stack Elements are:\n");
    for(i=S->top;i>=0;i--)
        printf("%d\n",S->array[i]);
}
int main()
{
    struct simpleArrayStack *S=createStack(10);
    int val;
    printf("Enter stack elements (-1) to quit\n");
    scanf("%d",&val);
    while(val!=-1)
    {
        push(S,val);
        scanf("%d",&val);
    }
    displayStack(S);
    val=pop(S);
    if(val!=NULL)
        printf("Popped item:%d",val);
    displayStack(S);
	return 0;
}
