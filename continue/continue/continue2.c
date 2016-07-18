/* A program to find the product of n integers entered by a user. If user enters 0 and skip it */
#include<stdio.h>
void main()
{
    int i,n,num,prod=1;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        i=i+1;
        printf("Enter integer number: ");
        scanf("%d",&num);
        if(num<0)
            continue;
        prod=prod*num;
    }
    printf("The product of n integers: %d",prod);
}
