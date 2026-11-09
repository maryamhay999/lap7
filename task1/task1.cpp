#include <iostream>
using namespace std;

void swapV(int num1, int num2)
{
    int swap = num1;
    num1 = num2;
    num2 = swap;
}

void swapR(int& num1, int& num2)
{
    int swap = num1;
    num1 = num2;
    num2 = swap;
}

int main()
{
    int No1, No2;

    cout << "Please enter two numbers: \n";
    cin >> No1 >> No2;

    cout << "The two numbers before any call: "
        << "num1 = " << No1 << " num2 = " << No2 << endl;

    swapV(No1, No2);

    cout << "The two numbers after swapV call: "
        << "num1 = " << No1 << " num2 = " << No2 << endl;

    swapR(No1, No2);

    cout << "The two numbers after swapR call: "
        << "num1 = " << No1 << " num2 = " << No2 << endl;

    return 0;
}