// Recursive C++ program to find sum of digits of a number
#include <iostream>
using namespace std;

// Function to check sum of digit using recursion
int sum_of_digits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10 + sum_of_digits(n / 10));
}

int main()
{
    int num, result;

    cout << "Enter a positive number: ";
    cin >> num;

    result = sum_of_digits(num);

    cout << "Sum of digits in " << num
        << " is " << result << endl;

    return 0;
}
