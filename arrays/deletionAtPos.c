#include<stdio.h>
void main()
{
    int i,n,pos, a[100];
    printf("Enter size of the array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    printf("Enter the position at which an element is to be deleted\n");
    scanf("%d",&pos);
    for(i=pos;i<=n-2;i++)
        a[i]=a[i+1];
    printf("Array after deletion is\n");
    for(i=0;i<=n-2;i++)
        printf("%d\n",a[i]);
}
