#include <iostream>

using namespace std;

int Factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * Factorial(n-1);
}

int main(void)
{
    cout << "1! = " << Factorial(1) << endl;
    cout << "1! = " << Factorial(2) << endl;
    cout << "1! = " << Factorial(3) << endl;
    cout << "1! = " << Factorial(4) << endl;
    cout << "1! = " << Factorial(9) << endl;
    return 0;
}