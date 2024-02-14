#include <iostream>
//dynamically allocation of memory

int main()
{
    int array[10];
    int *ptr = new int[10];//dynamically allocation
    for (int counter = 0; counter < 10; counter++)
    {
        std::cout << "enter value for array[" << counter << "]: ";
        std::cin >> array[counter];
        ptr[counter] = array[counter];
    }
    std::cout << "---------------------------------------------" << std::endl;
    for (int counter2 = 0; counter2 < 10; counter2++)
    {
        std::cout << "Value of array[" << counter2 << "] "
                  << " is: " << ptr[counter2] << std::endl;
    }
    delete[] ptr;//de allocation
}