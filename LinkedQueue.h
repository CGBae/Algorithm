#pragma once
typedef int element;
typedef struct Qnode {
	element data;
	struct Qnode* link;
}QNode;

typedef struct {
	QNode* front, * rear;
}LQueueType;

LQueueType* createLinkedQueue();
int isLQEmpty(LQueueType* LQ);
void enLQueue(LQueueType* LQ, element item);
element deLQueue(LQueueType* LQ);
element peek(LQueueType* LQ);
void printLQ(LQueueType* LQ);