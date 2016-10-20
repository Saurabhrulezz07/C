#include<stdio.h>
int main()
{
    int i,j,k,space=4;
    for(i=1;i<=5;i++) // to control rows
    {
        for(j=1;j<=space;j++) //to control and display spaces
        {
            printf(" ");
        }
        space--; //To reduce the number of spaces to be printed
        for(k=1;k<=i;k++)// To control column and display *
        {
            printf("* ");
        }
        printf("\n");
    }
	return 0;
}
