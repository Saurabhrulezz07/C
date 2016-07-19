#include<stdio.h>
#define INF 9999
#define MAX_SIZE 100
/* It is assumed that array indices start at index 1 */
void mergeSort(int a[],int p, int r)
{
    if(p>=r)
        return;
    int q;
    q=(p+r)/2;
    mergeSort(a,p,q);
    mergeSort(a,q+1,r);
    merge(a,p,q,r);
}
void merge(int a[],int p,int q, int r)
{
    int b[MAX_SIZE],c[MAX_SIZE];
    int i,j=1,k=1;
    for(i=p;i<=q;i++)
        b[j++]=a[i];
    b[j]=INF;
    for(i=q+1;i<=r;i++)
        c[k++]=a[i];
    c[k]=INF;
    j=1,k=1;
    for(i=p;i<=r;i++)
    {
        if(b[j]<c[k])
            a[i]=b[j++];
        else
            a[i]=c[k++];
    }

}
int main()
{
    int a[MAX_SIZE],i,n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    mergeSort(a,1,n);
    printf("Array after sorting is\n");
    for(i=1;i<=n;i++)
        printf("%d\t",a[i]);
    return 0;
}
