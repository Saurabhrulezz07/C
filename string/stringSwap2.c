/* Swap two strings (using pointers to string)
METHOD: 2- Here we use in-built function memcpy */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char *str1, char *str2)
{
    char *temp=(char *)malloc(((strlen(str1)>strlen(str2))?strlen(str1)+1:strlen(str2)+1));
    printf("%d\n",sizeof(temp));
}
int main()
{
    char *str1="First";
    char *str2="Second";
    swap(str1,str2);
    printf("Str1=%s\n",str1);
    printf("Str2=%s\n",str2);
    return 0;
}
