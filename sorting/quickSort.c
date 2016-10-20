#include<stdio.h>
#define SIZE 100
void quickSort(int a[], int n);
int partition(int a[],)
int main()
{
    int a[SIZE],i,n;
    printf("Enter array size\n",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quickSort(a,n);
    printf("Sorted array\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
