/* A program to simulate a digital clock */
#include<stdio.h>
#include<time.h>
#include<malloc.h>
#include<windows.h>//for windows Sleep function
int * makeDigitArray(int digit);
void printDigit(int *digitArray1, int *digitArray2);
int digitMatrix[10][7]={{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1}};
int main()
{
	struct tm *t=malloc(sizeof(struct tm));
	time_t *t1=malloc(sizeof(time_t));
	int hour,min,hourUnitDigit,hourTensDigit,minUnitDigit,minTensDigit;
	while(1)
    {   system("cls");
        time(t1);
        t=localtime(t1);
        min=t->tm_min;
        minUnitDigit=min%10;
        minTensDigit=min/10;
        hour=t->tm_hour%12;
        hourUnitDigit=hour%10;
        hourTensDigit=(hour/10);
        printf("Hour: %d\n",hour);
    	printf("Minute: %d\n",t->tm_min);
        printDigit(makeDigitArray(hourTensDigit),makeDigitArray(hourUnitDigit));
    	printDigit(makeDigitArray(minTensDigit),makeDigitArray(minUnitDigit));
        Sleep(1*1000);
            }
	return 0;

}
int * makeDigitArray(int digit)
{
	int *digitArray,i;
	switch(digit)
	{
		case 0:	digitArray=&digitMatrix[0][0];
				break;
		case 1:	digitArray=&digitMatrix[1][0];
				break;
		case 2:	digitArray=&digitMatrix[2][0];
				break;
		case 3:	digitArray=&digitMatrix[3][0];
				break;
		case 4:	digitArray=&digitMatrix[4][0];
				break;
		case 5:	digitArray=&digitMatrix[5][0];
				break;
		case 6:	digitArray=&digitMatrix[6][0];
				break;
		case 7:	digitArray=&digitMatrix[7][0];
				break;
		case 8:	digitArray=&digitMatrix[8][0];
				break;
		case 9:	digitArray=&digitMatrix[9][0];
				break;

	}
	return digitArray;
}
void printDigit(int *digitArray1,int *digitArray2)
{
	printf("\n");
	printf(" ");
	if(*digitArray1==0)
		printf(" ");
	else
		printf("_");
	printf(" ");
	printf(" ");
	if(*digitArray2==0)
		printf(" ");
	else
		printf("_");
	printf(" ");
	printf("\n");
	if(*(digitArray1+5)==0)
		printf(" ");
	else
		printf("|");
	if(*(digitArray1+6)==0)
		printf(" ");
	else
		printf("_");
	if(*(digitArray1+1)==0)
		printf(" ");
	else
		printf("|");
	if(*(digitArray2+5)==0)
		printf(" ");
	else
		printf("|");
	if(*(digitArray2+6)==0)
		printf(" ");
	else
		printf("_");
	if(*(digitArray2+1)==0)
		printf(" ");
	else
		printf("|");
	printf("\n");
	if(*(digitArray1+4)==0)
		printf(" ");
	else
		printf("|");
	if(*(digitArray1+3)==0)
		printf(" ");
	else
		printf("_");
	if(*(digitArray1+2)==0)
		printf(" ");
	else
		printf("|");
	if(*(digitArray2+4)==0)
		printf(" ");
	else
		printf("|");
	if(*(digitArray2+3)==0)
		printf(" ");
	else
		printf("_");
	if(*(digitArray2+2)==0)
		printf(" ");
	else
		printf("|");
	printf("\n\n");
}
