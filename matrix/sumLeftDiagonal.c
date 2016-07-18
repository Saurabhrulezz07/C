/*Sum of left diagonal of square matrix*/
#include<stdio.h>
void main()
{
    int a[100][100],n,i,j,sum=0;
    printf("Enter total row/column square matrix\n");
    scanf("%d",&n); /*n is total no of row as well as total no of col */
    printf("Enter matrix elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    /*Finding sum of left diagonal */
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)/*if row = col then element is on left diagonal */
                sum=sum+a[i][j];
        }
    }
    printf("Sum of left diagonal elements is %d\n",sum);
}
