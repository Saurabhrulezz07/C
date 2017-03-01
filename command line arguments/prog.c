#include<stdio.h>
typedef char * string; 
void main(int argc, string argv[])
{
    int i;
    if(argc==1)
        printf("No argument sent\n");
    else
    {
        for(i=0;i<argc;i++)
            puts(argv[i]);
    }
}
