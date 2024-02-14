#include <iostream>
using namespace std;

int fac1(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    return n * fac1((n - 1));
}
int main()
{
    cout << "Enter a number for n: ";
    int n;
    cin >> n;
    cout << "Enter a number for r: ";
    int r;
    cin >> r;
    if (r > n) // If user enters r smaller than n than it will generate an error message to user
    {
        cout << "Your Entered r Smaller than n it's Permutation does not exist, Please Try again !";
    }
    if (n == r) // when n and r are equal the (n-r) will be equal to zero and factorial of zero is 1 so I used the logic below to make (n-r)! equal to 1
    {
        int k;
        k = 2;
        r = 1;
        long double permutation;
        permutation = fac1(n) / fac1(k - r);
        cout << n << " Permutation " << r << " is: " << permutation;
    }
    else
    {

        double permutation;
        permutation = fac1(n) / fac1(n - r);
        cout << n << " Permutation " << r << " is: " << permutation;
    }
    cout << "\nIf you Want to find Permutation again just run this program again, Otherwise close your IDE haha ";
}