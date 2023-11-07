#ifndef __PATIENT_H__
#define __PATIENT_H__
#include <string>
typedef struct patient {
public:
	std::string name;
	std::string ID;
	int roomNumber;      //科室代号
	std::string doctor;  //坐诊医生
     
	patient(){}
	patient(std::string name, std::string ID, int roomNumber, std::string doctor, std::string time)
	{

		this->name = name;
		this->ID = ID;
		this->roomNumber = roomNumber;
		this->doctor = doctor;
		this->time = time;
	}
   //构造函数
   
}Patient;

#endif