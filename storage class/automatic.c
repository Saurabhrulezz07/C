#include<stdio.h>
void display();
void main()
{
    display();
    display();
    display();

}
void display()
{
    static int i=1;
    printf("%d\n",i);
    i++;
}
