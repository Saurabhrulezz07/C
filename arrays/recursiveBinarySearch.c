#include<stdio.h>
#define NOT_FOUND -1
int recursiveBinarySearch(int a[], //the array
                          int p, //lower bound
                          int q, //upper bound
                          int x); //item to be searched
int main()
{
    int i,a[10],item,n=10,p,q,retVal;
    printf("Enter the 10 elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter item to be searched\n");
    scanf("%d",&item);
    p=0;
    q=n-1;
    retVal=recursiveBinarySearch(a,p,q,item);
    if(retVal==NOT_FOUND)
        printf("Search item not present\n\n");
    else
        printf("Search item present at index: %d\n\n",retVal);
}
int recursiveBinarySearch(int a[], //the array
                          int p, //lower bound
                          int q, //upper bound
                          int x)
{
    int r;
    r=(p+q)/2;
    if(p>q)
        return NOT_FOUND;
    else if(a[r]==x)  //Element Found
        return r;
    else if(x<a[r])
        recursiveBinarySearch(a,p,r-1,x);
    else
        recursiveBinarySearch(a,r+1,q,x);
}
