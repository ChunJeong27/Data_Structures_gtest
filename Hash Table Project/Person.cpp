#include "Person.hpp"
#include <iostream>
#include <string>

int Person::getSSN()
{
    return this->ssn;
}

void Person::showPerInfo()
{
    std::cout << "주민등록번호: " << this->ssn << std::endl;
    std::cout << "이름: " << this->name << std::endl;
    std::cout << "주소: " << this->addr << '\n' << std::endl;
}

Person* Person::makePersonData(int ssn, char* name, char* addr)
{
    Person* newP = new Person();
    newP->ssn = ssn;
    strcpy(newP->name, name);
    strcpy(newP->addr, addr);
    return newP;
}