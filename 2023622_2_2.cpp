#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int endingTerm;
    int sequence = 0;
    cout << "Enetr An \"n\" term for this Sequence \"0, 2, 6, 14, 30, 62, ... \" :  "; // prompt user for nth term
    cin >> endingTerm;                                                                 // Here user input the nth Term
    cout << "Sequence is: ";
    for (int i = 0; i < endingTerm; i++) // it will run until it reaches the nth Term given by user
    {
        if (i == 0) // it will give our very first term in the sequence which is "0"
        {
            sequence = 0;
            cout << sequence << " , ";
        }
        if (i > 0) // it will give other remaining terms of the sequence
        {

            sequence += pow(2, i); // it means 2 raised to power i which will increment after one iteration
            cout << sequence;
            if (i != endingTerm - 1) // by using this condition it removes the last comma after nth term in our outpts
            {
                cout << " ,  "; // it will generate a space by inserting a comma
            }
        }
    }
}