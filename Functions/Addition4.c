/* A program to find addition of two numbers using functions
METHOD 4*/
#include<stdio.h>
int add(int a,int b); /* Function Prototype or Function Decleration */
void main()
{
    int x,y,s;
    printf("Enter two values\n");
    scanf("%d%d",&x,&y);
    s=add(x,y); /*Function Call*/
    printf("Sum=%d\n",s);
}
int add(int a,int b)   /* Function Definition */
{
    int sum;
    sum=a+b;
    return sum;
}
