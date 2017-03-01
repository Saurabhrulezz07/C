#include<stdio.h>
void main()
{
    int a[100],N,*ptr,i,sum=0;
    float avg;
    printf("Enter size of the array\n");
    scanf("%d",&N);
    printf("Enter array elements\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    ptr=a;
    for(i=0;i<N;i++)
        sum=sum+*(ptr+i);
    avg=(float)sum/N;
    printf("Average is %f\n",avg);
}
