#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
    int dec=63,bin=0,p=0;
    //scanf("%d",&dec);
    while(dec)
    {
        bin=dec%2*pow(10,p++)+bin;
        printf("bin=%d  dec=%d\n",bin,dec);
        dec/=2;
    }
    printf("\n%d",bin);
	return 0;
}
