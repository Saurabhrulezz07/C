#include<stdio.h>
void main()
{
    int i,n,a[100],count=0,mid,lower,upper,item;
    printf("Enter size of the array (<=100) \n");
    scanf("%d",&n);
    printf("Enter array elements IN SORTED ORDER\n");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    printf("Enter the item to be searched\n");
    scanf("%d",&item);
    lower=0;
    upper=n-1;
    while(lower<=upper)
    {
        mid=(lower+upper)/2;
        if(item==a[mid])
        {
            count++;
            break;
        }
        else if(item>a[mid])
        {
            lower=mid+1;
        }
        else if(item<a[mid])
        {
            upper=mid-1;
        }
    }
    if(count==0)
        printf("Item not found\n");
    else
        printf("Search successfull\n");
}
