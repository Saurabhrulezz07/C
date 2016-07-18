#include<stdio.h>
void main()
{
    int i,n,val,pos, a[100];
    printf("Enter size of the array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    printf("Enter the position at which an element is to be inserted\n");
    scanf("%d",&pos);
    printf("Enter the value of element to be inserted\n");
    scanf("%d",&val);
    for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];
    a[pos]=val;
    printf("Array after insertion is\n");
    for(i=0;i<=n;i++)
        printf("%d\n",a[i]);
}
