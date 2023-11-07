#ifndef __LINKEDQUEUE_H__
#define __LINKEDQUEUE_H__
#include "patient.h"
#include <cstddef>

typedef struct linkedqueue
{
    Patient patient;
    linkedqueue *rear;
    linkedqueue *front;

    linkedqueue(){
        this->rear = nullptr;
        this->front = nullptr;
    }

    linkedqueue(Patient patient){
      this->patient = patient;
      this->rear = nullptr;
      this->front = nullptr;
    }

    linkedqueue(std::string name,std::string ID,int roomNumber,std::string doctor)
    {

        this->patient.name = name;
        this->patient.ID = ID;
        this->patient.roomNumber = roomNumber;
        this->patient.doctor = doctor;
        this->rear = nullptr;
        this->front = nullptr;
    }

}LinkedNode, *LinkedQueue;


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

