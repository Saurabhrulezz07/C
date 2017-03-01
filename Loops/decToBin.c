#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
    int dec,bin=0,p=1;
    scanf("%d",&dec);
    while(dec)
    {
        printf("dec=%d bin=%d p=%d\n",dec,bin,p);
        bin=dec%2*p+bin;
        p=p*10;
        dec/=2;
    }
    printf("\n%d",bin);
	return 0;
}
