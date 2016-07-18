#include<stdio.h>
#include<stdarg.h>
double testFun(int a, ...)
{
    double d;
    va_list x;
    va_start(x,a);
    d=va_arg(x,double);
    va_end(x);
    return d;
}
int main()
{
    double d;
    d=testFun(2,7.89,7.21);
    printf("d=%f",d);
    return 0;
}
