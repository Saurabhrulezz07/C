/* How to print name of variable */
#include<stdio.h>
#define TEST_MACRO(x) #x
int main()
{
	int a=0;
	printf("Name = %s",TEST_MACRO(a));
	return 0;
}
