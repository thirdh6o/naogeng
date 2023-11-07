#ifndef __LINKEDQUEUE_H__
#define __LINKEDQUEUE_H__
#include "patient.h"
#include <cstddef>

typedef struct linkedqueue
{
    Patient patient;
    linkedqueue* next;

    linkedqueue(){
        this->next = nullptr;
    }

    linkedqueue(Patient patient){
      this->patient = patient;
      this->next = nullptr;
    }

    linkedqueue(std::string name,std::string ID,int roomNumber,std::string doctor)
    {

        this->patient.name = name;
        this->patient.ID = ID;
        this->patient.roomNumber = roomNumber;
        this->patient.doctor = doctor;
        this->next = nullptr;
    }

}LinkedNode, *LinkedQueue;


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

