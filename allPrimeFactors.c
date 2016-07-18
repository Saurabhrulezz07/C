#include<stdio.h>
int primeFact(int num);
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    primeFact(num);
}
int primeFact(int num)
{
    int i;
    if(num==1)
        return 0;
    else
    {
        for(i=2;i<=num;i++)
        {
            if(num%i==0)
            {
                printf("%d ",i);
                return primeFact((num/i));
            }
        }
    }
}
