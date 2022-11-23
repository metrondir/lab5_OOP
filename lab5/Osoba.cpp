#include "Osoba.h"
#include <iostream>
Osoba::Osoba(void)
{
	setName("Uknown");
	setSurname("Uknown");
	setAge(1);
}

Osoba::~Osoba(void)
{
}

std::string Osoba::getName(void)
{
	return Name;
}

void Osoba::setName(std::string value)
{
	Name = value;
}

std::string Osoba::getSurname(void)
{
	return Surname;
}

void Osoba::setSurname(std::string value)
{
	Surname = value;
}

int Osoba::getAge(void)
{
	return Age;
}

void Osoba::setAge(int value)
{
	Age = value;
}

void Osoba::ChangeAge()
{
	unsigned int NewAge;
	std::cin >> NewAge;
	Age = NewAge;
	std::cout << "Setted new age: " << Age<<"\n";
}
