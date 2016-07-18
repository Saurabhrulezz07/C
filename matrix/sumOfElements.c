#include<stdio.h>
void main()
{
int a[100][100],i,j,m,n,sum=0;
printf("Enter number of rows and columns\n");
scanf("%d%d",&m,&n);
printf("Enter Matrix\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
//Now we find sum
for(i=0;i<m;i++)
{
	for(j=0;j<=n;j++)
	{
		sum=sum+a[i][j];
	}
}
printf("Sum of matrix is %d\n",sum);
}
