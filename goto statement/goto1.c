#include<stdio.h>
void testFun();
int main()
{
	if(1)
	{
		ifLabel: printf("True\n");
		goto testFunLabel;
	}
	else
	{
		elseLabel: printf("False\n");
		goto ifLabel;
	}
	return 0;
}
void testFun()
{
	testFunLabel: printf("Inside Test Function\n");
}
