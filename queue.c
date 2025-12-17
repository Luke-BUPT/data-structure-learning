#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef{
	int *num;
	int front;
	int rear;
	int length;
}queue;

queue* init(int lenth){
	queue* q=(queue*)malloc(sizeof(queue));
	q->num=(int*)malloc(sizeof(int)*lenth);
	q->front=0;
	q->rear=0;
	return q;
}

bool isfull(queue* q){
	if((rear+1)%queue->length=front)
		return true;
	else
		return false;
}

void push(queue* q,int val){
	if(!isfool(q)){
		q->num[q->rear]=val;
		rear=(rear+1)%length;
	}
	else
		printf("is full")
}

bool isempty(queue *q){
	if(q->rear==q->front)
		return true;
	else
		return false;
}

void out(queue *q){
	if(!isempty(q)){
		printf("%d\n",q->num[q->front]);
		q->num[q->front]=0;
		q->front=(q->front+1)%q->length;
	}
}
















