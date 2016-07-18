/* A program to read the contents of a file */
#include<stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp=fopen("test","r");
    c=getc(fp);
    while(c!=EOF)
    {
        printf("%d",c); //To display character on screen
        c=getc(fp);
    }
    fclose(fp);
}
