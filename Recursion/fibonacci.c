/* a program to display fibnocci series using Recursion */
#include<stdio.h>
int fib(int n);
void main()
{
    int i,n,val;
    printf("Enter number of terms upto which you want to generate fibonacci series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        val=fib(i);
        printf("%d\t",val);
    }
}
int fib(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return(fib(n-1)+fib(n-2));
}
