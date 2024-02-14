#include <iostream>

int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int (*ptr)(int a, int b);
    ptr = &sum;
    int s = 7, e = 3;
    std::cout << "The sum of " << s << " and " << e << " is: " << ptr(s, e);
}