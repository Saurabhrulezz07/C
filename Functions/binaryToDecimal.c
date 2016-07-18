/* A program to convert binary number into decimal number */
#include<stdio.h>
#include<math.h>
int binToDec(int bin);
void main()
{
    int n,binary,decimal;
    printf("Enter a binary number\n");
    scanf("%d",&binary);
    decimal=binToDec(binary);
    printf("Decimal equivalent is %d\n",decimal);
}
int binToDec(int bin)
{   int d,dec=0,c=0;
    while(bin!=0)
    {
        d=bin%10;
        dec=dec+d*pow(2,c);
        c++;
        bin=bin/10;
    }
    return dec;
}
