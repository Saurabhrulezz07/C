/* A program to find to find all the prime numbers between a given range from 1 to n */
#include<stdio.h>
void main()
{
    int i,j,n,sum=0;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
                sum++;
        }
        if(sum==0)
            printf("Prime Number %d\n",i);
    }
}
