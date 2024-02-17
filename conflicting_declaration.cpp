#include <iostream>
// when we declare same variable multiple times it confuses the 
//compiler we can use namespaces to remove this conflicting declaration 

namespace first
{
    int age;
}
namespace second
{
    std::string age;
}

int main()
{
    std::cout << "Entere your age";
    std::cin >> second::age;
    std::cout << "Your age is: " << second::age;
}