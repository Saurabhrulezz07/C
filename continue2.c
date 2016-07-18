/* A program to display 1 to n natural numbers. If the number is a multiple of 5 or 6 then skip it*/
#include<stdio.h>
void main()
{
    int i,n,p=1,num;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter a number ");
        scanf("%d",&num);
        if(num==0)
            continue;
        p=p*num;
    }
    printf("Product is %d\n",p);

}
