/* We also have to consider the concept of BIG ENDIAN and LITTLE ENDIAN
My system is little endian*/
#include<stdio.h>
int main()
{
   float a=0.375f;
   char i,x=1,y,j,k,arr[4][8]; 
   char *c=NULL;
   for(i=1;i<=4;i++)
   {    k=0;
        if(c==NULL)
             c=(char *)&a;
        else 
             c=c+1;
        for(j=7;j>=0;j--)
        {
 	     y=x&((*c)>>j);
  	     arr[4-i][k++]=y;
	}
   }
   for(i=0;i<3;i++)
   for(j=0;j<8;j++)
	printf("%d",arr[i][j]);
   printf("\n");
   return 0;
}
