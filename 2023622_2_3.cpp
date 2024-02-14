#include <iostream>
#include <math.h>
using namespace std;

int st_num, end_num;
bool is_prime(int number)
{
    if (number > 0 && number < 2)
    {

        return false;
    }

    for (int i = 2; i <= (number / 2); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cout << "Enter a Starting Number: ";
    cin >> st_num;
    cout << "Enetr an Ending Number: ";
    cin >> end_num;
    cout << "Prime numbers between " << st_num << " and " << end_num << " are: ";
    for (int i = st_num; i <= end_num; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
    }
}