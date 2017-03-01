#include<stdio.h>
#define MAX_ROW 3
#define MAX_COL 3
int main()
{
    int a[MAX_ROW][MAX_COL]={{1,2,3},{4,5,6},{7,8,9}};
    int (*p)[3];
    p=a;
    printf("%d\n",*(*p));
    //p=p+1;
    printf("%d\n",(*p)[1]);
    //p=p+1;
    printf("%d\n",(*p)[2]);
    return 0;
}
