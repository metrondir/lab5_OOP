#pragma once
#include<string>
class Osoba
{
protected:
	std::string Name;
	std::string Surname;
	int Age;
public:
	Osoba(void);
	~Osoba(void);
	std::string getName(void);
	void setName(std::string name);
	std::string getSurname(void);
	void setSurname(std::string surname);
	int getAge(void);
	void setAge(int year);
	virtual void ChangeAge();
};

