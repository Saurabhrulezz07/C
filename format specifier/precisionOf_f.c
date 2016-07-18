#include<stdio.h>
void main()
{
    float a=3614.33334224;
    printf("%f\n",a);
    char str[20]="Hello world";
    int l;
    printf("%s%n%f\n",str,&l,a);
    printf("Length=%d\n",l);
    char *ptr=str;
    printf("%p\n",ptr);
    float x=-1.0,y=0.0,z;
    z=x/y;
    printf("%F\n",z);
}
