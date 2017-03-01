#include<stdio.h>
int fib(int n);
void main() 	// calling  function
{
	int inp_number,i;
	printf("Please enter an integer:");
	scanf( "%d", &inp_number);
	for(i=0;i<inp_number;i++)
	printf("%d\t",fib(i));
}
int fib(int n)  //called function
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
    return (fib(n-1) + fib(n-2));    //Recursive case
}
