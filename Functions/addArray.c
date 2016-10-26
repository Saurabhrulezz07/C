#include<stdio.h>
void addArray(int a[100], int b[100], int c[100], int N); //N is the actual size of array a,b and c
void main()
{
	int x[100],y[100],z[100],size,i;
	printf("Enter the size of the arrays:\n");
	scanf("%d",&size);
	printf("Enter first array\n");
	for(i=0;i<=size-1;i++)
		scanf("%d",&x[i]);
	printf("Enter second array\n");
	for(i=0;i<=size-1;i++)
		scanf("%d",&y[i]);
	addArray(x,y,z,size);
	printf("Resultant addition of arrays:\n");
	for(i=0;i<=size-1;i++)
		printf("%d\n",z[i]);
}
void addArray(int a[100], int b[100], int c[100],int N)
{
	int i;
	for(i=0;i<=N-1;i++)
		c[i]=a[i]+b[i];
}
