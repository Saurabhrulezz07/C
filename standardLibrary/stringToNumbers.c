#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[20]="1234";
    int n1,n2;
    n1=strtol(str,NULL,10);
    printf("%d\n",n1);
    n1=atoi(str);
    printf("%d\n",n1);
    char str2[20]="34.56";
    double n3;
    float n4;
    n3=strtof(str2,NULL);
    printf("%.10f\n",n3);
    n4=atof(str2);
    printf("%.10f\n",n4);
}
