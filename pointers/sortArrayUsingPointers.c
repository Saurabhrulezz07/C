#include<stdio.h>
void main()
{
    int a[100],N,*p,i,l,t;
    printf("Enter the size of the array: ");
    scanf("%d",&N);
    printf("Enter array elements\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    p=&a[0];
    /* Bubble sort algorithm */
    for(l=N-1;l>0;l--)
    {
        for(i=0;i<l;i++)
        {
            if(*(p+i)>*(p+i+1))
            {
                t=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=t;
            }
        }
    }
    printf("Sorted array is\n");
    for(i=0;i<N;i++)
        printf("%d\n",a[i]);
}
