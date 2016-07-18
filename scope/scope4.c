#include<stdio.h>
void display();
int x=5; //GLOBAL VARIABLE
void main()
{
   int x=10; //LOCAL VARIABLE
   printf("%d\n",x);
   display();
}
void display()
{
    printf("%d",x);
}

