/* taken from page 83, Narsimha Karumanchi */
/*whenever capacity of stack becomes full, its capacity is increased by 2*/
#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
struct dynamicArrayStack
{
    int top;   //top will store the number of elements in stack
    int capacity;  //it will store total number of stack elements
    int *array;   //this is actual stack
};
struct dynamicArrayStack * createStack(int capacity)
{
    struct dynamicArrayStack *S=(struct dynamicArrayStack *)malloc(sizeof(struct dynamicArrayStack));
    if(S==NULL)
    {
        printf("Error in creating dynamicArrayStack\n");
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
bool isFullStack(struct dynamicArrayStack *S)
{
    if(S->top==S->capacity-1) //because we are counting stack elements from 0
        return true;
    else return false;
}
bool isEmptyStack(struct dynamicArrayStack *S)
{
    if(S->top==-1)
        return true;
    else return false;
}
void doubleStackSize(struct dynamicArrayStack *S)
{
    S->capacity=2*S->capacity;
    S->array=(int *)realloc((void *)S->array,S->capacity);
    if(S->array==NULL)
    {
        printf("Error in increasing stack size\n");
        exit(0);
    }
}
void push(struct dynamicArrayStack *S, int val)
{
    if(isFullStack(S))
        doubleStackSize(S);
    S->array[++S->top]=val;
}
int pop(struct dynamicArrayStack *S)
{
    int val;
    if(isEmptyStack(S))
        return NULL;
    val=S->array[(S->top)--];
    return val;
}
int displayStack(struct dynamicArrayStack *S)
{
    int i;
    printf("Stack Elements are:\n");
    for(i=S->top;i>=0;i--)
        printf("%d\n",S->array[i]);
}
int main()
{
    struct dynamicArrayStack *S=createStack(1);
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
