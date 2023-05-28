#include <iostream>

struct EmpInfo
{
    int empNum;
    int age;
};

int getHashValue(int empNum)
{
    return empNum % 100;
}

int main()
{
    EmpInfo empInfoArr[100];

    EmpInfo emp1 = {20120003, 42};
    EmpInfo emp2 = {20130012, 35};
    EmpInfo emp3 = {20170049, 27};

    EmpInfo r1, r2, r3;

    empInfoArr[getHashValue(emp1.empNum)] = emp1;
    empInfoArr[getHashValue(emp2.empNum)] = emp2;
    empInfoArr[getHashValue(emp3.empNum)] = emp3;

    r1 = empInfoArr[getHashValue(20120003)];
    r2 = empInfoArr[getHashValue(20130012)];
    r3 = empInfoArr[getHashValue(20170049)];

    std::cout << "사번 " << r1.empNum << ", 나이 " << r1.age << std::endl;
    std::cout << "사번 " << r2.empNum << ", 나이 " << r2.age << std::endl;
    std::cout << "사번 " << r3.empNum << ", 나이 " << r3.age << std::endl;
    return 0;
}