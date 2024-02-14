#include <iostream>
#include <time.h>

using namespace std;

int main()
{
  int a, i;
  int random;
  cout << "\t\t\t-------------- YOUR WELCOME - GUESS GAME -------------- \n";
  srand(time(0));

  cout << "\t\tYou have Three Chances\n";
  {
    for (i = 1; i <= 3; i++)

    {

      cout << "\n\n\n\t\t\t\t\tenter a guess number between 1-10\n";
      cin >> a;
      random = rand() % 10;

      if (a == random)

      {
        cout << "YOu won - Your Amazing o o\n";
        cout << "                        ^ ";
        break;
      }

      else
      {
        cout << "Nope Try again\n";
      }
      if (i == 3)
      {
        if (a != random)

        {
          cout << "You lost o o\n";
          cout << "          - ";
        }
      }
    }
  }
}
