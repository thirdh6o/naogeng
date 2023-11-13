#ifndef __LINKEDQUEUE_H__
#define __LINKEDQUEUE_H__
#include "patient.h"
#include <cstddef>


typedef struct Node
{
     Patient patient;  
     struct Node * next; 
}QueueNode;

typedef struct
{
    QueueNode *front,*rear;
}LinkedQueue;


//入队
void push(LinkedQueue& line);

//出队
void pop(LinkedQueue& line);

//获取队头
Patient getHead(LinkedQueue& line);

//判断是否空队
int emptyQueue(LinkedQueue& line);

//遍历输出病人信息
void printQueue(LinkedQueue& line);


//获取队列长度
int lengthQueue(LinkedQueue& line);


#endif

