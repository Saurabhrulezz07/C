#include<stdio.h>
int power(int x, int k);// FUNCTION DECLERATION OR PROTOTYPE
void main()
{
int a,b,res;
printf("Enter two values\n");
scanf("%d%d",&a,&b);
res=power(a,b); //FUNCTION CALL
printf("%d to the power %d is %d\n",a,b,res);
}
int power(int x, int k)// FUNCTION DEFINITION
{
int i,prod=1;
for(i=1;i<=k;i++)
{
prod=prod*x;
}
return prod;
}

