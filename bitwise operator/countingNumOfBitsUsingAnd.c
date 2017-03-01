#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n)
	{
		count++;
		n=n&(n-1);
	}
	printf("%d",count);
}
