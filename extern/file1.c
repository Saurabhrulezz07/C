#include<stdio.h>
int main()
{
	extern int fun(float);
    int a;
	a=fun(3.14);
	printf("%d",a);
	return 0;
}
