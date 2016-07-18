/* A program to display following table using matrix

	 1	 2	 3	 4	 5
___________________________________________
1	|1	 2	 3	 4	 5
2	|2	 4	 6	 8	10
3	|3	 6	 9	12	15
4	|4	 8	12	16	20
5	|5	10	15	20	25

*/
#include<stdio.h>
void main()
{
int a[5][5],i,j,prod,row,col;
printf("\t  1\t 2\t 3\t 4\t 5\n");
printf("_____________________________________________\n");
for(i=0;i<=4;i++)
{
	row=i+1;
	printf("%d\t|",row);
	for(j=0;j<=4;j++)
	{
		col=j+1;
		prod=row*col;
		printf("%2d\t",prod);
	}
	printf("\n");
}
}
