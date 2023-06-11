#include <iostream>

int main()
{
    struct Node
    {
        int data;
        struct Node* next;
    };  

    Node* head = nullptr;
    Node* tail = nullptr;
    Node* cur = nullptr;

    Node* newNode = nullptr;
    int readData;

    // 데이터를 입력 받는 과정
    while(true)
    {
        std::cout << "자연수 입력: ";
        std::cin >> readData;
        if(readData < 1)
            break;
        
        // 노드의 추가과정
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = nullptr;

        if(head == nullptr)
            head = newNode;
        else
            tail->next = newNode;
        
        tail = newNode;
    }
    std::cout << '\n';

    // 입력 받은 데이터의 출력과정
    std::cout << "입력 받은 데이터의 전체출력! " << std::endl;
    if(head == nullptr)
        std::cout << "저장된 자연수가 존재하지 않습니다. " << std::endl;
    else
    {
        cur = head;
        std::cout << cur->data << ' ';

        while(cur->next != nullptr)
        {
            cur = cur->next;
            std::cout << cur->data << ' ';
        }
        std::cout << '\n' << std::endl;
    }

    // 메모리의 해제과정
    if(head == nullptr)
        return 0;
    else
    {
        Node* delNode = head;
        Node* delNextNode = head->next;

        std::cout << head->data << "을(를) 삭제합니다. " << std::endl;
        free(delNode);

        while(delNextNode != nullptr)
        {
            delNode = delNextNode;
            delNextNode = delNextNode->next;

            std::cout << delNode->data << "을(를) 삭제합니다. " << std::endl;
            free(delNode);
        }   
    }

    return 0;
}