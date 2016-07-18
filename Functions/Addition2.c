/* A program to find addition of two numbers using functions
METHOD 2*/
#include<stdio.h>
int add(); /* Function Prototype or Function Decleration */
void main()
{
    int s;
    s=add(); /*Function Call*/
    printf("Sum=%d\n",s);
}
int add()   /* Function Definition */
{
    int a,b,sum;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
}
