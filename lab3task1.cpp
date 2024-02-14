#include <iostream>
#include <cmath>
#define PI 3.14

double area(double r) { return PI * pow(r, 2); }

void func(double (*pointer)(double), double f)
{
    std::cout << "Area of the circle is: " << pointer(f);
}

int main()
{
    std::cout << "enter radius of a circle: ";
    double radius;
    std::cin >> radius;
    func(area, radius);
}
