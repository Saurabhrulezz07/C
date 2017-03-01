#include<stdio.h>
int add(int a, int b);
int sub(int a,int b);
int mul(int a,int b);
float div(int a,int b);
void main()
{
	int x,y,resInt;
	char op;
	float resFloat;
	printf("Enter 2 operands\n");
	scanf("%d%d",&x,&y);
	printf("Enter an operator (+, -, *, /)\n");
	getchar();
	scanf("%c",&op);
	if(op=='+')
	{	
		resInt=add(x,y);
		printf("Addition is %d\n",resInt);
	}
	else if(op=='-')
	{
		resInt=sub(x,y);
		printf("Subtraction is %d\n",resInt);
	}
	else if(op=='*')
	{
		resInt=mul(x,y);
		printf("Multiplication is %d\n",resInt);
	}
	else if(op=='/')
	{
		resFloat=div(x,y);
		printf("Division is %f\n",resFloat);
	}
	else
	{
		printf("Invalid Input\n");
	}
}
int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
float div(int a, int b)
{
	return (float)a/(float)b;
}