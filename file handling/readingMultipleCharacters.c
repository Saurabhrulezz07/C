#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("sample.txt","r");
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(0);
	}
	ch=getc(fp);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=getc(fp);
	}
	printf("%c",ch);
	fclose(fp);
	return 0;
}