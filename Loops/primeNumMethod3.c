/* A program to find prime number using infinite loop */
#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(d=2;d<n&&n%d!=0;d++);
    if(d<n)
        printf("Number is not prime\n");
    else
        printf("Prime Number\n");
	return 0;
}
