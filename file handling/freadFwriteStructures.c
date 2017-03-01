#include<stdio.h>
#include<stdlib.h>
struct student
{
    int marks;
    char name[50];
    int age;
}s[5],t[5];
int main()
{
    int i;
    FILE *f1,*f2;

    printf("Enter student details\n");
    for(i=0;i<5;i++)
    {
        printf("Student %d:\n",(i+1));
        printf("Enter marks: ");
        scanf("%d",&s[i].marks);
        getchar();
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
    }
    f1=fopen("student.dat","w");
    fwrite(s,sizeof(s),5,f1);
    fclose(f1);
    f2=fopen("student.dat","r");
    fread(t,sizeof(t),5,f2);
    fclose(f2);
    printf("\n\nStudent details are\n");
    for(i=0;i<5;i++)
    {
        printf("Student %d:\n",(i+1));
        printf("Marks: ");
        printf("%d\n",t[i].marks);
        printf("Name: ");
        puts(t[i].name);
        printf("Age: ");
        printf("%d\n",t[i].age);
    }

    return EXIT_SUCCESS;
}
