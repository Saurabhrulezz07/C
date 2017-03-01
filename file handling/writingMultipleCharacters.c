#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char str[]="Hello World\nThis is Kiet Ghaziabad";
	int i;
	fp=fopen("sample.txt","w");
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(0);
	}
	for(i=0;i<strlen(str);i++)
	{
		putc(str[i],fp);
	}
	fclose(fp);
	return 0;
}