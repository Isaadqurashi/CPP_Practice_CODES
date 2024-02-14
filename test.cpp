#include <iostream>
using namespace std;

int main()
{
    string name;
    int roll_no;
    cout << "Enter you name: ";
    getline(cin, name);
    cout << name << endl;
    cout << "Enter your roll no: ";
    cin >> roll_no;
    cout << roll_no << endl;
}