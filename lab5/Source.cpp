#include<iostream>
#include<string>
#include"Osoba.h"
#include"Student.h"


int main()
{
	Osoba osob;
	Student st;
	int Age, StudentCourse, ZalikovaNumber;
	std::string Name,Surname,Univer;
	std::cout << "Name: ";
	std::cin >> Name;
	osob.setName(Name);
	std::cout << "Surname: ";
	std::cin >> Surname;
	osob.setName(Surname);
	std::cout << "Age: ";
	std::cin >> Age;
	osob.setAge(Age);
	std::cout << "NewAge: ";
	osob.ChangeAge();
	std::cout << "Univer: ";
	std::cin >> Univer;
	st.setUniver(Univer);
	std::cout << "ZalikovaNumber: ";
	std::cin >> ZalikovaNumber;
	st.setZalikovaNumber(ZalikovaNumber);
	std::cout << "Course: ";
	std::cin >> StudentCourse;
	st.setCourse(StudentCourse);
	Osoba* x = &st;
	std::cout << "NewCourse: ";
	x->ChangeAge();
	return 0;
}