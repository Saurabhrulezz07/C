/*Write a program in C that accepts the Rollno and name of 60 students in a class along with their marks in Physics, Chemistry and Mathematics. Print the roll no. and name of top 10 students on the sum of marks obtained in the three subjects.4. Write a program in C that accepts the Rollno and name of 60 students in a class along with their marks in Physics, Chemistry and Mathematics. Print the roll no. and name of top 10 students on the sum of marks obtained in the three subjects. */
#include<stdio.h>
struct student
{
    int roll;
    char name[50];
    int phy;
    int chem;
    int math;
    int total;
}s[60],t;
void main()
{
    int i,l,j,n=3;
    char str[10];
    printf("Enter student details\n");
    for(i=0;i<3;i++)
    {
        printf("Enter details of student %d\n",i+1);
        printf("Enter roll number: ");
        scanf("%d",&s[i].roll);
        gets(str);
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter physics marks: ");
        scanf("%d",&s[i].phy);
        printf("Enter chemistry marks: ");
        scanf("%d",&s[i].chem);
        printf("Enter maths marks");
        scanf("%d",&s[i].math);
        /* calculating the total marks */
        s[i].total=s[i].phy+s[i].chem+s[i].math;
    }
    /* Bubble sorting in descending order*/
    for(l=n-1;l>0;l--)
    {
        for(j=0;j<l;j++)
        {
            if(s[j].total<s[j+1].total)
            {
                t=s[j];  /* t must be variable of type student structure */
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    printf("Roll num and name of top 10 students is\n");
    for(i=0;i<3;i++)
    {
        printf("Roll number: ");
        printf("%d\n",s[i].roll);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: ");
        printf("%d\n",s[i].total);
    }
}
