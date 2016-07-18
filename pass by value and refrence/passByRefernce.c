/* 37. WAP to swap two elements using the concept of pointers */
#include<stdio.h>
void swap(int *a, int *b);
void main()
{
    int x,y;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&x,&y);
    swap(&x,&y); /* Pass by reference */
    printf("Inside main():\n");
    printf("First value:%d Second value:%d\n",x,y);
}
void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("Inside swap()\n");
    printf("First value:%d Second value:%d\n",*a,*b);
}
