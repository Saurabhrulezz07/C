#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of the array: ");
	scanf("%d",&n);
	int a[]={[0]=-1,[3]=5};
	printf("Array contents are\n");
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}
