#include<stdio.h>
void main()
{
    int i=1;
    while(i<=5)
    {
        int j=0;//LOCAL TO WHILE
        printf("%d ",j);
        i++;
    }
    printf("%d",j);
}
