/*Avg of n +ve numbers. If num is negative display the avg(excluding the avg of -ve input) & end the prog */
#include<stdio.h>
void main()
{
    int n,num,i, sum=0;
    float avg;
    printf("Enter number of terms \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter  a number ");
        scanf("%d",&num);
        if(num<0)
            break;
        sum=sum+num;
    }
    avg=(float)sum/(i-1);
    printf("Average is %f\n",avg);

}
