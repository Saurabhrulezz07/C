/* A program to print Pascal's Traiangle
           1
          1  1
        1  2   1
      1  3   3   1
   1   4   6   4   1
 1  5   10   10  5   1

*/


#include<stdio.h>
int main()
{
	int i,j,k,space=5,v;
	for(i=0;i<6;i++)
	{
	    for(j=1;j<=space;j++)
        {
            printf("%2c",' ');
        }
        space--;
		for(k=0;k<i;k++)
		{
            if(i==k)
                v=1;
            else if(k==0)
                v=1;
            else
                v=(i-1+k)+(i+k);
            printf("%4d",v);
		}
	printf("\n");
	}
	return 0;
}
