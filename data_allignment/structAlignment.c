#include<stdio.h>
int main()
{
	struct P1{
		short i;
		int c;
		int *j;
		short *d;
	}v;
	printf("%u",sizeof(v));
	return 0;
}
