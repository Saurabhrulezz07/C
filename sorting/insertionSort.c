#include<stdio.h>
int main()
{
    int i,j,key,n, a[100];
    printf("Enter size of the array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //insertion sort begins
    for(i=1;i<n;i++)
    {
        for(key=a[i],j=i-1;j>=0&&a[j]>key;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
    printf("Array after sorting is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
