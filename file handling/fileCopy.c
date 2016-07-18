/* A program to copy the contents of a file to another file */
#include<stdio.h>
void main()
{
    FILE *fp1,*fp2;
    char c;
    fp1=fopen("test","r");
    fp2=fopen("testCopy","w");
    c=getc(fp1);
    while(c!=EOF)
    {
        fputc(c,fp2); //To display character on screen
        c=fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
}
