#include<stdio.h>
void main(int argc, char *argv[])
{
    int i;
    if(argc==1)
        printf("No argument sent\n");
    else
    {
        for(i=0;i<=argc;i++)
            puts(argv[i]);
    }
}
