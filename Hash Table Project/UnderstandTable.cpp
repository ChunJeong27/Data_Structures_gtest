#include <iostream>

struct EmpInfo
{
    int empNum;
    int age;
};

int main()
{
    EmpInfo empInfoArr[1000];
    EmpInfo ei;
    int eNum;

    std::cout << "사번과 나이 입력: ";
    scanf("%d %d", &(ei.empNum), &(ei.age));
    empInfoArr[ei.empNum] = ei;

    std::cout << "확인하고픈 직원의 사번 입력: ";
    scanf("%d", &eNum);

    ei = empInfoArr[eNum];
    std::cout << "사번 " << ei.empNum << ", 나이 " << ei.age << std::endl;
    return 0;
}