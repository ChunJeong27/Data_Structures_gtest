#include <iostream>
//#include "ArrayBaseStack.hpp"
#include "ListBaseStack.hpp"

int main(void)
{
    // Stack의 생성 및 초기화
    Stack stack;

    // 데이터 넣기
    stack.push(1);  stack.push(2);
    stack.push(3);  stack.push(4);
    stack.push(5);

    // 데이터 꺼내기
    // while(!stack.isEmpty()){
    //     std::cout << "using peek() function" << std::endl;
    //     std::cout << stack.peek() << std::endl;

    //     std::cout << "using pop() function" << std::endl;
    //     std::cout << stack.pop() << std::endl;
    // }
    // std::cout << '\n';

    while(!stack.isEmpty())
        std::cout << stack.pop() << ' ';

    return 0;
}