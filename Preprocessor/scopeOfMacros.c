#include<stdio.h>
void func()
{
	#define C 0
}
int main()
{
	printf("%d\n",C);
	func();
	return 0;
}
