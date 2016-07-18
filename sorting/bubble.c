#include<stdio.h>
void main()
{
int i,j,l,n,temp,a[100];
printf("Enter number of elements\n");
scanf("%d",&n);
printf("Enter the array\n");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
//Bubble sort begins
for(l=n-1;l>0;l--)
{
   	for(j=0;j<l;j++)
	{
		if(a[j]>a[j+1])/* for sorting in descending order change > to < */
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("Array after sorting is\n");
for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}

