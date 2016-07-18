/* A program to read 10 numbers from a file using fscanf*/
#include<stdio.h>
void main()
{
    FILE *fp;
    int n,i;
    fp=fopen("testNum","r");
    printf("Ten numbers are \n");
    for(i=1;i<=10;i++)
    {
       fscanf(fp,"%d",&n);
       printf("%d\n",n);
    }
    fclose(fp);
}
