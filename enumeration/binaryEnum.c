#include<stdio.h>
enum binary{
    zero=0;
    one=1;
};
void main()
{
    enum binary a;
    a=one;
    printf("%d",a);
}
