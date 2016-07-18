#include<stdio.h>
void manipulate(int b[100],int n1);
void main()
{
    int a[100],n,i;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    manipulate(a,n);/*FUNCTION CALL- array a is sent as an argument */
    printf("Value of array a after function call\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
void manipulate(int b[100], int n1)
{
    int i;
    for(i=0;i<n1;i++)
        b[i]=b[i]+5;
}
