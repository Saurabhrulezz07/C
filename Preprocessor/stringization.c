#include<stdio.h>
#define TEST_MACRO(x) #x
int main()
{
	puts(TEST_MACRO(45));
	return 0;
}
