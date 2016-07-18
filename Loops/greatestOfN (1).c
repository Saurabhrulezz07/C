/* A program to find greatest and smallest out of n numbers entered by the user */
#include<stdio.h>
void main()
{
    int i,n,num,max,min;
    printf("Enter total number of terms n (>=0) \n");
    scanf("%d",&n);
    printf("Enter number: ");
    scanf("%d",&num);
    max=min=num;
    for(i=2;i<=n;i++)
    {
        printf("Enter number: ");
        scanf("%d",&num);
        if(num>max)
            max=num;
        else if(num<min)
            min=num;
    }
    printf("The greatest number is %d\n",max);
    printf("The smallest number is %d\n",min);
}
