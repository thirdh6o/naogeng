#include "Line.h"
#include <iostream>

/*
@brief
*/

void push(LinkedQueue& s,Patient x){
     QueueNode *p;
     p->patient=x;        
     p->next=NULL;    
     s->rear->next=p;   
     s->rear=p;       

}

//出队
void pop(LinkedQueue& s,Patient *e){
    if(Empty(s))
    {
         printf("队列为空\n");
         return;
    }
     
     QueueNode *p;
     p=s->front->next;
     if(p==s->rear)    
     {
         s->front=s->rear; 
     }
     *e=p->patient;
     s->front->next=p->next;
     delete p;
}

//获取队头
Patient getHead(LinkedQueue& s){
    if(Empty(s))
    {
        std::cout << "队列为空" << std::endl;
         return 0;
    }
    return s.front->next->patient;
}

//判断是否空队
int emptyQueue(LinkedQueue& s){
    if(s.front==s.rear)
    {
        return 1;
    }
    return 0;
}

//遍历输出病人信息
void printQueue(LinkedQueue& scanf_s){

}


//获取队列长度
int lengthQueue(LinkedQueue& s){
    QueueNode *p;
    p=s.front;
 
    int length=0;
    while(p->next)
    {
        length++;
        p=p->next;
    }
    return length;
}