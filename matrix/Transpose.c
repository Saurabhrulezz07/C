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
//We first display the original matrix
printf("Original matrix\n");
for(i=0;i<m;i++)
{
        for(j=0;j<n;j++)
        {
                printf("%d\t",a[i][j]);
        }
        printf("\n");
}
//Now we display the transpose of the matrix
printf("Transposed Matrix\n");
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		printf("%d\t",a[j][i]);
	}
	printf("\n");
}
}
