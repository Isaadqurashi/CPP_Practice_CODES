#include <iostream>
using namespace std;

int main()
{
    for (int x = 1; x <= 3; x++)
    {
        for (int s = 1; s <= 3 - x; s++) /*EDr 3-1 ho ga mtlab starting two SPACES sy start hoga then x++ sy x badhta jye ga jabky edr iterations kam hoti jyen ge*/
        {
            cout << " ";
        }
        for (int y = 1; y <= 2 * x - 1; y++) /* 2*x-1 sy phli dafa 2*1-1=1 ho ga then 2*2-1=3 phr 2*3-1=5 code k matabik iterate krwana hai es liya yeh condition lagai */
        {
            cout << y;
        }
        cout << "\n";
    }
    /* phly spaces kam ho rahe the half code ky baad Spaces badhti jyen gye */

    for (int x = 2; x >= 1; x--) /* for  last two lines */
    {
        for (int s = 1; s <= 3 - x; s++)
        {
            cout << " ";
        }
        for (int y = 1; y <= 2 * x - 1; y++)
        {
            cout << y;
        }
        cout << endl;
    }
}
