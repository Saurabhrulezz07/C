#include<stdio.h>
struct queueStruct
{
	int front,rear;
	int capacity;
	int *array;
}
struct queueStruct * createQueue(int size)
{
	struct queueStruct *q;
	q=malloc(sizeof(struct queueStruct));
	if(!q)
	{
		printf("Error in allocating memory to queue structure\n");
		exit(0);
	}
	q->front=q->rear=-1; //queue is empty
	q->capacity=size;
	q->array=(int *)malloc(sizeof(q->capacity)*size)	
	return q;
}

