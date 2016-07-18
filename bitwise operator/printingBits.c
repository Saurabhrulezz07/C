#include<stdio.h>
int main()
{
    unsigned char c=9,a,t=1;
    int i;
    for(i=7;i>=0;i--)
    {
        a=c>>i;
        printf("%d",a&1);
    }
}
