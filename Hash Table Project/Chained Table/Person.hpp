#ifndef __PERSON_H__
#define __PERSON_H__

int constexpr STR_LEN = 50;

class Person
{
public:
    int getSSN();
    void showPerInfo();
    Person* makePersonData(int ssn, const char* name, const char* addr);

private:
    int ssn;
    char name[STR_LEN];
    char addr[STR_LEN];

};

#endif // __PERSON_H__