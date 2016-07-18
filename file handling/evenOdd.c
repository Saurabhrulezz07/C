/* WAP to read 10 numbers from a file testNum. Write even numbers in a file (even.dat) and write odd numbers in another file (odd.dat) */
#include<stdio.h>
void main()
{
    FILE *fp,*fp1,*fp2;
    int n,c;
    fp=fopen("testNum","r");
    fp1=fopen("even.dat","w");
    fp2=fopen("odd.dat","w");
    while(feof(fp)==0)
    {
    c=fscanf(fp,"%d",&n);
    if(n%2==0)
        fprintf(fp1,"%d ",n);
    else
        fprintf(fp2,"%d ",n);
    }
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
}
