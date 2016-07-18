#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter two values:\n");
    scanf("%d%d",&x,&y);
    swap(x,y);
    printf("Inside main():\n");
    printf("First value:%d Second value:%d\n",x,y);
}
void swap(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("Inside swap()\n");
    printf("First value:%d Second value:%d\n",a,b);
}
