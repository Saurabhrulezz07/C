#include<stdio.h>
#include<string.h>
void main()
{
    char str[10],*ptr1,*ptr2;
    int l,i;
    gets(str);
    l=strlen(str);
    ptr1=str;
    ptr2=&str[l-1];
    while(*ptr1!='\0')
    {
        if(*ptr1!=*ptr2)
        {
            printf("Not a palindrome\n");
            exit(1);
        }
        ptr1++;
        ptr2--;
    }
    printf("Palindrome\n");
}
