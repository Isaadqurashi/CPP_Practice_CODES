#include <iostream>
using namespace std;

int main()
{
    int n, first = 0, second = 1, next;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci Series is: ";

    for (int i = 1; i < n; i++)
    {
        cout << first << "\t";
        next = first + second;
        first = second;
        second = next;
    }
}