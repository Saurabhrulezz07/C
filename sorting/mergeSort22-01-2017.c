#include<stdio.h>
int merge(int a[], int b[], int start, int end)
{
    int l1=(start+end)/2,l2=end,i=start,j=(start+end)/2+1,k=start;
    //O(n) running time
    while(i<=l1&&j<=l2)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=l1)
    {
        b[k++]=a[i++];
    }
    while(j<=l2)
    {
        b[k++]=a[j++];
    }
    for(i=start;i<=end;i++)
        a[i]=b[i];// the changes must be made in array a since we are actually recursively sending it only
    printf("\n");
    return 0;
}
int mergeSort(int a[],int b[],int m, int n)//m is starting index of array, n is ending index of array
{
    if(m>=n)
        return 0;
    else 
    {//O(log n) running time
        mergeSort(a,b,m,(m+n)/2);
        mergeSort(a,b,(m+n)/2+1,n);
        merge(a,b,m,n);
    }
    return 0;
}
int main(void)
{
    int a[]={12,6,13,-1,4,7,3,19},b[10],i;
    mergeSort(a,b,0,7);
    for(i=0;i<8;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}