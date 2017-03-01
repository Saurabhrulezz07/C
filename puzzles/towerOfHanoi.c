#include<stdio.h>
void towerOfHanoi(int n, char fromTower, char auxTower, char toTower)
{
    if(n==1) /*Directly place disk from source to destination tower*/
    {
        printf("Move disk %d from Tower %c to Tower %c\n",n, fromTower, toTower);
        return;
    }
    /* Move the top n-1 disks to auxilary tower*/
    towerOfHanoi(n-1, fromTower, toTower, auxTower);
     /* Move the nth disk to destination tower */
    printf("Move disk %d from Tower %c to Tower %c\n",n, fromTower, toTower);
    /* Move the remaining n-1 disks to destination Tower */
    towerOfHanoi(n-1, auxTower, fromTower, toTower);
}
int main()
{
    int n;
    char fromTower, toTower, auxTower;
    printf("Enter number of disks: ");
    scanf("%d",&n);
    getchar();
    printf("Enter starting Tower: ");
    scanf("%c",&fromTower);
    getchar();
    printf("Enter destination Tower: ");
    scanf("%c",&toTower);
    getchar();
    printf("Enter auxillary Tower: ");
    scanf("%c",&auxTower);
    towerOfHanoi(n, fromTower, auxTower, toTower);
	return 0;
}

