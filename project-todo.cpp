#include <iostream>
using namespace std;

unsigned long long int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

int main()
{
    int x;

    cout << "Enter a Number: ";
    cin >> x;

    if (x < 0)
    {
        cout << "Factorial is not defined for negative numbers" << endl;
    }
    else if (x > 65)
    {
        cout << "You Entered a Number Whose Factorial is too large Please try again and enter A number Between 1-65\n";
    }
    else
    {
        cout << "Factorial of " << x << " is: " << factorial(x) << endl;
    }

    return 0;
}
