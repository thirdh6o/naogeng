#include "Line.h"
#include <iostream>

/*
@brief
*/

void push(LinkedQueue& s){
     QueueNode *p;
     p->data=x;        
     p->next=NULL;    
     s->rear->next=p;   
     s->rear=p;       

}

//����
void pop(LinkedQueue& line){

}

//��ȡ��ͷ
Patient getHead(LinkedQueue& line){

}

//�ж��Ƿ�ն�
int emptyQueue(LinkedQueue& line){
if(line.front==line.rear)
    {
        return 1;
    }
    return 0;
}

//�������������Ϣ
void printQueue(LinkedQueue& line){

}


//��ȡ���г���
int lengthQueue(LinkedQueue& line){
    QueueNode *p;
    p=line.front;
 
    int length=0;
    while(p->next)
    {
        length++;
        p=p->next;
    }
    return length;
}