/* A program to display 1 to n natural numbers. If the number is a multiple of 5 or 6 then skip it*/
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%5==0||i%6==0)
            continue;
        printf("%d\n",i);
    }
}
