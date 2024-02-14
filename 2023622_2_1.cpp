#include <iostream>
using namespace std;

int main()
{
    int tableNum = 5;
    int result;
    for (int i = 6; i <= 10; i++)
    {
        result = tableNum * i;
        cout << tableNum << " x " << i << " = " << result << endl;
        cout << endl;
    }
}