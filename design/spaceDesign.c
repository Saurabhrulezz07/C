/* A program to print following design
        *
       **
      ***
     ****
    *****
*/


#include<stdio.h>
int main()
{
	int i,j,k,space=4;
	for(i=1;i<=9;i=i+2)
	{
	    for(j=1;j<=space;j++)
        {
            printf(" ");
        }
        space--;
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
