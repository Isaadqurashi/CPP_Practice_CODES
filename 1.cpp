#include <iostream>
//bitwise XOR
int main()
{
    int a = 3, b = 6;
    int res = a ^ 6;
    std::cout << res;
}

// 2^4 2^3 2^2 2^1 2^0
// 16   8  4   2    1
//     3=      1    1
//     6=  1   1    0
//   3^6=  1   0    1 =5