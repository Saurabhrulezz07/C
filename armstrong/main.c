#include<stdio.h>
#include<math.h>
#define true 1
#define false 0
int numOfDigits(int n);
int isArmstrong(int n);
int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(isArmstrong(num))
		printf("%d is armstrong\n",num);
	else
		printf("%d is not armstrong\n",num);
	return 0;
}
int isArmstrong(int n)
{
	int d,r,sum=0,n1;
	n1=n;
	d=numOfDigits(n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+pow(r,d);
		n=n/10;
	}
	if(sum==n1)
		return true;
	else
		return false;
}
int numOfDigits(int n)
{
	int nod=0;
	while(n!=0)
	{
		nod++;
		n=n/10;
	}
	return nod;
}
