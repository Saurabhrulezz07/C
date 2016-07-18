#include<stdio.h>
int main()
{
    char c=-15,a;
    int i;
    if(c>=0)
    {
	    for(i=7;i>=0;i--)
	    {
		a=c>>i;
		printf("%d",a&1);
	    }
    }
    else
    {
	printf("-");
	c=c*-1;
	for(i=6;i>=0;i--)
    	{
		a=c>>i;
		printf("%d",a&1);
    	}
	
    }
    printf("\n");
    return 0;
}
