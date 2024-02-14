#include <iostream>
using namespace std;

int number;

unsigned int fibonacci(signed int number)
{
    if (number == 0)
    {
        return 0;
    }
    if (number == 1 || number == 2)
    {
        return 1;
    }
    else
        return fibonacci(number - 2) + fibonacci(number - 1);
}

int main()
{
    char choice;
    do
    {

        cout << "Enter a positive Integer Number: ";
        cin >> number;
        if (number < 0)
        {
            cout << "you entered a negative number please Enter a positive number";
        }
        cout << "Number at position " << number << " is " << fibonacci(number);
        cout << "\nExit? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}