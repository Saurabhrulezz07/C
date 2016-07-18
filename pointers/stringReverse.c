#include<stdio.h>
#include<string.h>
void main()
{
    char str[10],*ptr;
    int l,i;
    gets(str);
    ptr=str;
    l=strlen(str);
    for(i=l-1;i>=0;i--)
        printf("%c",*(ptr+i));
}
