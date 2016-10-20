/* A program to swap the values of 2 variables without using third variable */
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 values: ");
	scanf("%d%d",&a,&b);
	printf("Values before swapping\n");
	printf("a=%d\tb=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Values after swapping\n");
	printf("a=%d\tb=%d\n",a,b);
	return 0;
}
