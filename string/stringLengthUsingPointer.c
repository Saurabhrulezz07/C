#include<stdio.h>
int main()
{
    char str[100],*temp;
    int len;
    fgets(str,100,stdin);
    temp=str;
    while(*temp!='\0')
        temp++;
    len=temp-str;
    printf("String length=%d\n\n",len);
    return 0;
}
