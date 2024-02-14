#include <iostream>
using namespace std;

void reverseString(char *pointer, const string line, int size); // prototype for reverseString function

int main()
{
    string line;
    cout << "Enter a string: ";
    getline(cin, line);
    int length = line.size();
    char *pointer = new char[length];            // Dynamically allocate memory for a character array (string) using pointers
    cout << "The Original Order of string is: "; // it will print the original order
    for (int i = 0; i < length; i++)
    {
        cout << line[i];
    }
    reverseString(pointer, line, length); // function call
    delete[] pointer;                     // Deallocate the memory
}
void reverseString(char *pointer, const string line, int size)
{
    for (int i = 0; i < size; i++)
    {
        pointer[i] = line[i]; // It will store all Characters of entered string
    }
    cout << "\nThe Reverse Order Of the String is: ";
    for (int j = size - 1; j >= 0; j--)
    {
        cout << pointer[j]; // It will print each character of the entered string in reverse oredr
    }
}