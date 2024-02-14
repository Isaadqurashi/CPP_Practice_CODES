#include <iostream>

int main()
{
    int size1;
    std::cout << "Enter the size of array: ";
    std::cin >> size1;
    int size = size1 * 2;
    int even[size];
    int *pointer = new int[size];
    for (int counter = 0; counter < size; counter++)
    {
        if (counter % 2 == 0)
        {
            even[counter] = counter;
            pointer[counter] = even[counter];
        }
    }
    std::cout << "---------------------------------------------" << std::endl;
    for (int counter2 = 0; counter2 < size; counter2++)
    {
        if (counter2 % 2 == 0)
        {

            std::cout << "Value of array[" << counter2 << "] "
                      << " is: " << pointer[counter2] << std::endl;
        }
    }
    delete[] pointer; // de allocation
    std::cout << "---------------------------------------------" << std::endl;
}