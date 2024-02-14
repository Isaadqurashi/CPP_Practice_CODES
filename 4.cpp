#include <iostream>

int product(int a, int b)
{
    return a * b;
}

void func(int (*ptr)(int, int), int f, int s)
{
    std::cout << "Product is: " << ptr(f, s);
}

int main()
{
    func(product, 4, 5);
}