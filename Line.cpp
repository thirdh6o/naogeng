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

//����
void pop(LinkedQueue& s,Patient *e){
    if(Empty(s))
    {
         std::cout << "����Ϊ��" << std::endl;
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

//��ȡ��ͷ
Patient getHead(LinkedQueue& s){
    if(Empty(s))
    {
        std::cout << "����Ϊ��" << std::endl;
         return 0;
    }
    return s.front->next->patient;
}

//�ж��Ƿ�ն�
int emptyQueue(LinkedQueue& s){
    if(s.front==s.rear)
    {
        return 1;
    }
    return 0;
}

//�������������Ϣ
void printQueue(LinkedQueue& scanf_s){

}


//��ȡ���г���
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

void InitQueue(LinkedQueue& s)
{
	QueueNode *p;
	p = new QueueNode;
	if (!p)
	{
		cout << "�����ڴ�ʧ��" << endl;
		return;
	}
	p->next = NULL;
	s.front = s.rear = p;
}