#include "Student.h"
#include <iostream>

Student::Student(void)
{
	setZalikovaNumber(1);
	setUniver("Uknown");
	setCourse(1);
}

Student::~Student(void)
{
}

int Student::getZalikovaNumber(void)
{
	return ZalikovaNumber;
}

void Student::setZalikovaNumber(int value)
{
	ZalikovaNumber = value;
}

std::string Student::getUniver(void)
{
	return Univer;
}

void Student::setUniver(std::string value)
{
	Univer = value;
}

int Student::getCourse(void)
{
	return Course;
}

void Student::setCourse(int value)
{
	Course = value;
}

void Student::ChangeAge()
{
	Course += 1;
	std::cout << Course;
}