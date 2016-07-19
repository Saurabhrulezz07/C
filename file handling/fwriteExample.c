#include<stdio.h>
int main()
{
    int arr[10]={3,8,9,12,43,6,5,12,4,87},t[10],i;
    FILE *f,*f1;
    f=fopen("test.dat","w");
    fwrite(arr,sizeof(int),10,f);
    fclose(f);
    f1=fopen("test.dat","r");
    fread(t,sizeof(int),10,f);
    for(i=0;i<10;i++)
        printf("%d\n",t[i]);
    fclose(f1);
}
