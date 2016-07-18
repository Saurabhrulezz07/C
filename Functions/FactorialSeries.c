/* A program to create a function to find factorial. Then use the created function to find out the sum of the following series
S=1!+2!+3!+........n!   */
#include<stdio.h>
int factorial(int num);  //FUNCTION DECLERATION OR PROTOTYPE
void main()
{
    int n,i,sum=0;
    printf("Enter the number of terms of ther series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum=sum+factorial(i); //FUNCTION CALL
    }
    printf("The sum of series is %d\n",sum);
}
int factorial(int num)// FUNCTION DEFINITION
{
    int j,fact=1;
    for(j=num;j>=1;j--)
    {
    fact=fact*j;
    }
    return fact;
}
