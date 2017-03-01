#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("testfgets","r");
    if(fp==NULL)
    {   printf("Error opening file\n");
        exit(1);
    }
    char str[100];
    fgets(str,sizeof(str),fp);
    puts(str);
}
