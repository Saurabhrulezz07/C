/* A program to find addition of two numbers using functions
METHOD 1*/
#include<stdio.h>
void add(); /* Function Prototype or Function Decleration */
void main()
{
    add(); /*Function Call*/
}
void add()   /* Function Definition */
{
    int a,b,sum;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum is %d",sum);
}
