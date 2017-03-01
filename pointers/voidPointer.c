#include<stdio.h>
int main()
{
    int a=5;
    void *ptr;
    ptr=&a;
    printf("%d ",*((int *)ptr));
	return 0;
}
