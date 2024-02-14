#include <iostream>

int sub(int a, int b) { return a - b; }

void ptrfun(int (*ptr)(int, int), int a, int b)
{
    std::cout << "Sub is: " << ptr(a, b);
}

int main()
{
    int a = 2, b = 4;
    ptrfun(sub, a, b);
}
