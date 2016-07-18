#include<stdio.h>
struct employee
{
    int code;
    char name[100];
    int sal;
    char city[100];
} e[3];
void main()
{
    int i;
    printf("Enter details of employees\n");
    for(i=0;i<3;i++)
    {
        printf("Enter code");
        scanf("%d",&e[i].code);
        printf("Enter name\n");
        fgets(e[i].name,10,"stdin");
        printf("Enter salary\n");
        scanf("%d",&e[i].sal);
        printf("Enter city\n");
        fgets(e[i].city,10,"stdin");
    }
    printf("Details of employees having salary greater than 50000\n");
    for(i=0;i<3;i++)
    {
        if(e[i].sal>50000)
        {
            printf("%d\n", e[i].code);
            puts(e[i].name);
            printf("%d\n",e[i].sal);
            puts(e[i].city);
        }
    }
}
