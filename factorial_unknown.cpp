#include <iostream>
using namespace std;

int main()
{
    int x;
    unsigned long long int f = 1;

    cout << "Enter the number: ";
    cin >> x;

    if (x >= 0)
    {
        if (x <= 65)
        {

            for (int i = 1; i <= x; i++)
            {
                f *= i;
            }
            cout << "Factorial of " << x << " is: " << f << endl;
        }
        else
        {

            cout << "You Entered a Number Whose Factorial is too large Please try again and enter A number Between 1-65\n";
        }
    }
    else
    {
        cout << "You entered a Negative Number. Please try again." << endl;
    }

    return 0;
}