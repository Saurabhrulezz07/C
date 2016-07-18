/* A program to write characters to a file using putc */
#include<stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp=fopen("testWrite","w");
    printf("Enter input (Press ! to quit)\n");
    scanf("%c",&c);
    while(c!='!')
    {
        putc(c,fp); //To display character on screen
        scanf("%c",&c);
    }
    fclose(fp);
}
