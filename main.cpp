#include <iostream>
#include <string>
#include "Line.h"
void InitQuene(LinkedQuene& s)
{
	QueueNode *p;
	p = new QueueNode;
	if (!p)
	{
		cout << "�����ڴ�ʧ��" << endl;
		return;
	}
	p->next = NULL;
	q.front = q.rear = p;
}

int main() {
 LinkedQueue patients;
 InitQuene(patients);
 
 
}