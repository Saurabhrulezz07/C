#include<stdio.h>
struct student
{
	int roll; 
	char name[50];
	int marks;
}s1={.name="patrick",50};
int main()
{
	printf("%d\t%s\t%d\n",s1.roll,s1.name,s1.marks);
	return 0;
}
