/* WAP that takes 10 integers from a file and write the square of these integers to another file*/
#include<stdio.h>
void main()
{
    FILE *fp,*fp1;
    int n,sq;
    fp=fopen("testNum","r");
    fp1=fopen("testNumSquare","w");
    while(feof(fp)==0)
    {
    fscanf(fp,"%d",&n);
    sq=n*n;
    fprintf(fp1,"%d ",sq);
    }
    fclose(fp);
    fclose(fp1);
}
