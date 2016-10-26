#include<stdio.h>
#include<math.h>
#define TRUE 1
#define FALSE 0
int numOfDigits(int num);
int isArmstrong(int num);
int main()
{
	int i,v;
	for(i=1;i<=500;i++)
	{
		v=isArmstrong(i);
		if(v==TRUE)
			printf("%d is Armstrong number\n",i);
	}
	return 0;
}
int isArmstrong(int num)
{
	int d,r,sum=0,num2;
	num2=num;
	d=numOfDigits(num);
	while(num!=0)
	{
		r=num%10;
		sum=sum+pow(r,d);
		num=num/10;
	}
	if(sum==num2)
		return TRUE;
	else
		return FALSE;
}
int numOfDigits(int num)
{
	int nod=0;
	while(num!=0)
	{
		nod++;	
		num=num/10;
	}
	return nod;
}
