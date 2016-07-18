#include<stdio.h>
int main()
{
    FILE *f;
    f=tmpfile();
    if(f==NULL)
        printf("File cannot be created\n");
    getchar();
    return 0;
}
