/* refer The GNU C Library Reference Manual pg 725 */
#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	int i;
	char ch;
	while((ch=getopt(argc,argv,"u:p:"))!=-1)
	{
		printf("%c %s\n",ch,optarg);
	}
	//the name of fun is getopt
	for(i=optind;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}
	return 0;
}