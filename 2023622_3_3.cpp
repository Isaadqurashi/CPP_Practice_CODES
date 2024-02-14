#include <iostream>
using namespace std;

// It will Double the Each element enter by user
void doubleElements(int *pointer, int size)
{
    for (int i = 0; i < size; i++)
    {
        pointer[i] *= 2;
    }
}
// for Displaying the Elemenst of the array
void displayArray(int *pointer, int size)
{
    cout << "Elements Of The Array is" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << pointer[i] << endl;
    }
}

int main()
{
    int size;
    cout << "Eneter the Size of the Array: ";
    cin >> size;
    // Dynamically allocate memory for the array using pointers
    int *pointer = new int[size];
    for (int i = 0; i < size; i++)
    {
        // propmt the user to input values for each element of the array
        cout << "Enter Value for Element " << i + 1 << " array: ";
        cin >> pointer[i];
    }
    cout << "The Original Elements of array are\n";
    for (int i = 0; i < size; i++)
    {
        cout << pointer[i] << endl;
    }
    doubleElements(pointer, size);
    cout << "Double Elements" << endl;
    displayArray(pointer, size);
    // Deallocate the memory for the array so we can use this memory in future
    delete[] pointer;
}