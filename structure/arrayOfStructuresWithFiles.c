/*Write a program to input 10 records of employees in a file and search these records for a particular employee. Each record will have eid(int), ename (string) and dept(int).*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
	int eid;
	char ename[50];
	int dept;
}e[10],temp[10];
int main()
{
	FILE *fp;
	int i;
	char name[50];
	fp=fopen("employee.dat","w");
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(0);
	}
	printf("Enter Details of 10 Employees\n");
	for(i=0;i<3;i++)
	{
		printf("Enter employee id: ");
		scanf("%d",&e[i].eid);
		getchar();
		printf("Enter employee name: ");
		gets(e[i].ename);
		printf("Enter employee department code: ");
		scanf("%d",&e[i].dept);
	}
	fwrite(e,sizeof(e[0]),3,fp);
	fclose(fp);
	fp=fopen("employee.dat","r");
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(0);
	}
	fread(temp,sizeof(temp[0]),3,fp);
	printf("Enter employee name to search: ");
	getchar();
	gets(name);
	for(i=0;i<3;i++)
	{
		if(strcmp(temp[i].ename,name)==0)
		{
			printf("Search Successfull\n");
			printf("Employee Id: %d\n",temp[i].eid);
			printf("Employee Name: ");
			puts(temp[i].ename);
			printf("Employee Department Code: %d\n",temp[i].dept);
		}
	}
	fclose(fp);
	return 0;
}
