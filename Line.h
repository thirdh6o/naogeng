#ifndef __LINKEDQUEUE_H__
#define __LINKEDQUEUE_H__
#include "patient.h"
#include <cstddef>


typedef struct Node
{
    Patient data;  
     struct Node * next; 
}QueueNode;

typedef struct
{
    QueueNode *front,*rear;
}LinkedQueue;


//���
void push(LinkedQueue& line);

//����
void pop(LinkedQueue& line);

//��ȡ��ͷ
Patient getHead(LinkedQueue& line);

//�ж��Ƿ�ն�
int emptyQueue(LinkedQueue& line);

//�������������Ϣ
void printQueue(LinkedQueue& line);


//��ȡ���г���
int lengthQueue(LinkedQueue& line);


#endif

