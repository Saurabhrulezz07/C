#include<stdio.h>
void fun();
void fun1(void);
int main()
{
	fun(5);//this will work
	fun1(5);// this will not work
	return 0;
}
void fun(void)
{}
void fun1()
{}
