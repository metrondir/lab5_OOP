#pragma once
#include "Osoba.h"
class Student : public Osoba
{
	int ZalikovaNumber;
	std::string Univer;
	int Course;
public:
	Student(void);
	~Student(void);
	int getZalikovaNumber(void);
	void setZalikovaNumber(int ZalikovaNumber);
	std::string getUniver(void);
	void setUniver(std::string Univer);
	int getCourse(void);
	void setCourse(int Course);
	void  ChangeAge() override;
};