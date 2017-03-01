#include<stdio.h>
int fact(int n);
int main()
{
    int n,f;
    printf("Enter a number\n");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial=%d\n",f);
	return 0;
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
