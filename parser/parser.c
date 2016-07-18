#include<stdio.h>
#include<string.h>
#define SIZE 100000
int main()
{
    FILE *f,*f1;
    int len=0;
    char str[SIZE];
    f=fopen("content.xml","r");
    f1=fopen("test.txt","w");
    if(f==NULL)
        printf("File cannot be opened\n");
    else
        printf("Success\n");
    len=fread(str,1,SIZE,f);
    printf("len=%d\n",len);
    str[len]='\0';
    getchar();
    strcpy(str,strstr(str,"<table:table-row table:style-name=\"ro2\">"));
    int count=1;
    int v=6;
    char temp[SIZE];
    while(strcpy(temp,strstr(str,"<text:p>"))!=NULL)
    {
        strcpy(str,temp);
        printf("Test\n");
        count++;
        if(count==v)
        {
            v+=8;
            strncpy(temp,str,9);
            printf("Test1\n");
            temp[10]='\0';
            printf("Test2\n");
            puts(temp);
            printf("Test3\nsize=%d\n",strlen(str));
            fputs(str,f1);
        }

        printf("Address %p\n",strstr(str,"<text:p>"));
        strcpy(temp,strstr(str,"</text:p>"));
        strcpy(str,temp);

    }
    fclose(f);
    fclose(f1);
    return 0;
}
