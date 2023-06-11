#include <iostream>

int main()
{
    int arr[10];
    int readCount = 0;
    int readData;
    int i;

    while(true)
    {
        std::cout << "자연수 입력: ";
        std::cin >> readData;
        if(readData < 1)
            break;

        arr[readCount++] = readData;
    }

    for(i = 0; i < readCount; i++)
        std::cout << arr[i] << ' ';

    return 0;
}