/* A program to write dara to a file using fprintf */
#include<stdio.h>
void main()
{
    FILE *fp;
    int n,i;
    fp=fopen("testNum","w");
    printf("Enter 10 numbers\n");
    for(i=1;i<=10;i++)
    {
       scanf("%d",&n);
       fprintf(fp,"%d ",n);
    }
    fclose(fp);
}
