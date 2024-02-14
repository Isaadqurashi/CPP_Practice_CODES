#include <iostream>
using namespace std;

struct Student
{
    int age, rollno;
    string name;
    double fee;
} variable1, variable2;

int main()
{
    cout << "Enter your Age: ";
    cin >> variable1.age;
    cout << "Enter Your Roll NO: ";
    cin >> variable2.rollno;
    cout << "Enter Your Roll NO Again: ";
    cin >> variable1.rollno;
    cout << "Enter Your Name: ";
    cin >> variable1.name;
    cout << "Enter Your Fee: ";
    cin >> variable1.fee;
    cout << variable1.age << endl;
    cout << variable2.rollno << endl;
    cout << variable1.rollno << endl;
    cout << variable1.name << endl;
    cout << variable1.fee;
}
