#include<stdio.h>
#include<string.h>
int main()
{
	int a[5]={1,2,3,4,5},b[5],i;
	memcpy(b,a,sizeof(a));
	for(i=0;i<5;i++)
		printf("%d ",b[i]);
	return 0;
}

