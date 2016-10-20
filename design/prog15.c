/* A program to print following design
A
B A
A B A
B A B A
A B A B A    */


#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			if(j%2==0)
				printf("B ");
			else
				printf("A ");
		}
	printf("\n");
	}
	return 0;
}
