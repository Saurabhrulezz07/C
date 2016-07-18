#include<stdio.h>
void display();
int a; //GLOBAL VARIABLE
void main()
{
   a=10;
   printf("%d\n",a);
   display();
}
void display()
{
    printf("%d\n",a);
}
