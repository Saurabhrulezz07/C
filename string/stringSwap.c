/* Swap two strings (using pointers to string)
METHOD: 1 */
#include<stdio.h>
void swap(char **str1, char **str2)
{
    char *temp;
    temp=*str1;
    *str1=*str2;
    *str2=temp;
}
int main()
{
    char *str1="First";
    char *str2="Second";
    swap(&str1,&str2);
    printf("Str1=%s\n",str1);
    printf("Str2=%s\n",str2);
    return 0;
}
