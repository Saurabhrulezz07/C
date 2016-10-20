#include<stdio.h>
int main()
{
    int i,startDay,n;
	printf("Enter number of days in month: ");
	scanf("%d",&n);
	printf("Enter starting day of the month (1-Sun ... 7-Sat) : ");
	scanf("%d",&startDay);
	printf("Sun\tMon\tTue\tWed\tThur\tFri\tSat\n");
	for(i=1;i<startDay;i++)
        printf(" \t");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",i);
        if((startDay++)%7==0)
            printf("\n");
    }
	return 0;
}
