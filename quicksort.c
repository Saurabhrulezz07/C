/*Quick sort*/
#include<stdio.h>
int partition(int a[], int low, int upper)
{
    int pivot,t,i,temp;
    pivot=upper;
    t=pivot;
    i=low;
    while(i<t)
    {
        if(a[i]>a[pivot])
        {
            t--;
            temp=a[i];
            a[i]=a[t];
            a[t]=temp;
        }
        else
            i++;
    }
    if(a[t]>a[pivot])
    {
        temp=a[pivot];
        a[pivot]=a[t];
        a[t]=temp;
        return t;
    }
    return pivot;
}
void quicksort(int a[],int low, int upper)
{
    int p,i,n=5;
    printf("Lower=%d\tUpper=%d\n",low,upper);
    printf("Array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    if(low<upper)
    {
        p=partition(a,low,upper);
        printf("p=%d\n",p);
        if(p>=0&&p<=n-1)
        {
            quicksort(a,low,p-1);
            quicksort(a,p+1,upper);
        }
    }

}
int main()
{
    int i,n,a[10];
    n=5;
    printf("Enter three array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
