#ifndef __LINKEDQUEUE_H__
#define __LINKEDQUEUE_H__


//���ṹ�����Ͷ���
typedef struct NodeQueue
{
    ElemType_Queue data;
    struct NodeQueue* next;

}Node_Queue;

//�������Ͷ���
typedef struct Linkedqueue
{
    int num;
    NodeQueue* rear;
    NodeQueue* front;
}Linkedqueue;

//�����ʼ��
Linkedqueue* Init_Linkedqueue();

//����һ���½��
NodeQueue* Create_New_Node_Queue(ElemType_Queue value);

//���
void push_Queue(Linkedqueue* linkedqueue, ElemType_Queue value);

//����
void pop_Queue(Linkedqueue* linkedqueue);

//��ȡ��ͷ
ElemType_Queue get_QueueHead(Linkedqueue* linkedqueue);

//�ж��Ƿ�ն�
int empty_Queue(Linkedqueue* linkedqueue);

//����һ������
//ForwardListHead *destroy_ForwardListHead(ForwardListHead *forwardlisthead);

void destroy_Queue(Linkedqueue* linkedqueue);


//��ȡ���г���
int length_Queue(Linkedqueue* linkedqueue);


#endif

