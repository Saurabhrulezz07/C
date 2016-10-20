/* A program to print following pattern
A
AB
ABC
ABCD
ABCDE
*/
#include<stdio.h>
int main()
{
    char i,j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
	return 0;
}
