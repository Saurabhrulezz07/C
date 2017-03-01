#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch='a';
	fp=fopen("sample.txt","w");
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(0);
	}
	fputc(ch,fp);
	fclose(fp);
	return 0;
}