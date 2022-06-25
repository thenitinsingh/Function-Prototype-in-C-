#include <iostream>
using namespace std;
int sum(int num1, int num2);
int main()
{
    int num1, num2;
    cout << "Enter the numbers:";
    cin >> num1 >> num2;
    cout << "The sum is " << sum(num1, num2);
}
int sum(int num1, int num2)
{
    int c;
    c = num1 + num2;
    return c;
}