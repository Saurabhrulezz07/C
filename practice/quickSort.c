#include<stdio.h>
int partition(int a[], int p, int r)
{
    int pivot,i,j,t;
    pivot=a[r];
    i=0;
    j=r;
    while(i<j)
    {
        if(a[i]>pivot)
        {
            j--;
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        else
            i++;
    }
    t=a[j];
    a[j]=a[r];
    a[r]=t;
    return j;
}
void quickSort(int a[],int p, int r)
{
    int q;
    if(p<=r)
    {
        q=partition(a,p,r);
        quickSort(a,p,q-1);
        quickSort(a,q+1,r);
    }
}
int main()
{
    int a[]={2,3,9,7,6,12,5,4,32,1},i;
    quickSort(a,0,9);
    for(i=0;i<10;i++)
        printf("\n%d",a[i]);
    return 0;
}
