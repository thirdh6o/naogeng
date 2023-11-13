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

//出队
void pop(LinkedQueue& line){

}

//获取队头
Patient getHead(LinkedQueue& line){

}

//判断是否空队
int emptyQueue(LinkedQueue& line){
if(line.front==line.rear)
    {
        return 1;
    }
    return 0;
}

//遍历输出病人信息
void printQueue(LinkedQueue& line){

}


//获取队列长度
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