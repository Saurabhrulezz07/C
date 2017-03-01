#include<stdio.h>
int main()
{
	int a[100],b[100],c[10],i,j,k,l1,l2,l3;
	printf("Enter length of first array: ");
	scanf("%d",&l1);
	printf("Enter length of second array: ");
	scanf("%d",&l2);
	printf("Enter the contents of first array in ascending order\n");
	for(i=0;i<l1;i++)
		scanf("%d",&a[i]);
	printf("Enter the contents of second array in ascending order\n");
	for(i=0;i<l2;i++)
		scanf("%d",&b[i]);
	l3=l1+l2; //finding length of array c[]
	i=0;
	j=0;
	k=l3-1;
	while(i<l1&&j<l2)
	{
		if(a[i]<b[j])
			c[k]=a[i++];
		else
			c[k]=b[j++];
		k--;
	}


	while(i<l1)
	{
		c[k]=a[i];
		k--;
		i++;
	}
	while(j<l2)
	{	c[k]=b[j];
		k--;
		j++;
	}
		
	printf("Resultant array after merging is:\n");
	for(k=0;k<l3;k++)
		printf("%d\n",c[k]);
	
}
