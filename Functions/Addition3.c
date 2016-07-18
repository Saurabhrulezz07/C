/* A program to find addition of two numbers using functions
METHOD 3*/
#include<stdio.h>
void add(int a,int b); /* Function Prototype or Function Decleration */
void main()
{
    int x,y;
    printf("Enter two values\n");
    scanf("%d%d",&x,&y);
    add(x,y); /*Function Call*/
}
void add(int a,int b)   /* Function Definition */
{
    int sum;
    sum=a+b;
    printf("Sum=%d\n",sum);
}
