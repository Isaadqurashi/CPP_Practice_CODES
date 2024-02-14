#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++) // i=4 for four lines
    {
        for (int j = 0; j < 5; j++) // j for five coloumns
        {
            /*first  we have to print a row of five columns *, then two rows starting and ending with a * and in between
              these two * there are three spaces in both middle lines and after third line the forth line again a row of
              five colums of * */
            if (i == 0 || i == 3 || j == 0 || j == 4)

            /*here is the logic when i = 0 there a full row of five colums and there is another full row of five columns of *
            when i=3 means when there is fourth row */
            /* here is another logic after printing first row , in second and third row we only have to print * in the start and
            ending of line so it only print the * when there is first or fifth column*/

            {
                cout << "* "; // just add another space for formatting
            }

            /*here is the most intresting part of our code when we have to print three spaces in between fisrt and fifth cloumn
            when j(column in second and third row) is equal to 1,2,3 , it will print space in between j=0(first column) and j=4(fifth column)*/

            else
                cout << "  ";
        }
        cout << endl;
    }
}