#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100],*p1,*p2;
	int l,i,j;
	printf("Enter string: ");
	gets(str);
	l=strlen(str);
	p1=&str[0];
	p2=&str[l-1];
	j=l-1;
	for(i=0;i<l;i++)
	{
		if(*(p1+i)!=*(p2+j))
		{
			printf("String is not palindrome\n");
			exit(0);
		}
		j--;

	}
	printf("String is palindrome\n");
}
