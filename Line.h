#ifndef __LINKEDQUEUE_H__
#define __LINKEDQUEUE_H__
#include "patient.h"


//结点结构体类型定义
typedef struct NodeQueue
{
    ElemType_Queue data;
    struct NodeQueue* next;

}Node_Queue;

//链表类型定义
typedef struct Linkedqueue
{
    int num;
    NodeQueue* rear;
    NodeQueue* front;
}Linkedqueue;

//链表初始化
Linkedqueue* Init_Linkedqueue();

//创建一个新结点
NodeQueue* Create_New_Node_Queue(ElemType_Queue value);

//入队
void push_Queue(Linkedqueue* linkedqueue, ElemType_Queue value);

//出队
void pop_Queue(Linkedqueue* linkedqueue);

//获取队头
ElemType_Queue get_QueueHead(Linkedqueue* linkedqueue);

//判断是否空队
int empty_Queue(Linkedqueue* linkedqueue);

//销毁一个队列
//ForwardListHead *destroy_ForwardListHead(ForwardListHead *forwardlisthead);

void destroy_Queue(Linkedqueue* linkedqueue);


//获取队列长度
int length_Queue(Linkedqueue* linkedqueue);


#endif

