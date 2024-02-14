#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(const string line, int starting, int ending) // const string will not change throughout the execution
{

    {
        while (starting < ending && !isalnum(line[starting]))
        /*Ignore spaces (' ') , symbols and punctuationwhen determining if a string is a palindrome.
      if any space or symbol or punctuation occurs it will ignore it by moving to next character position.
      by starting++*/
        {
            starting++;
        }
    }
    while (starting < ending && !isalnum(line[ending])) // Ignore spaces (' ') , symbols and punctuationwhen determining if a string is a palindrome.
    {
        ending--;
    }
    if (starting >= ending)
    {
        return true;
    }
    // Here's the recursive command which will start form 0 index to (length-1)th index of entered string
    // Here's another uncommon function is used which is tolower(its one of the function of header file #include<cctype>)
    // tolower converts uppercase Characters into Lower case if characters already in lowercase they will remain same
    // Ignore capitalization when determining if a string is a palindrome.
    return (tolower(line[starting]) == tolower(line[ending]) && isPalindrome(line, starting + 1, ending - 1));
}

int main()
{
    string line;
    cout << "Enter a string: "; // prompt user to enter a string
    getline(cin, line);

    int length = line.size(); // it will give thse total size of entered string
    int starting = 0;         // Its for 0 index it means the very first Character of entered string
    int ending = length - 1;  // Its the last Character of enterd string

    if (isPalindrome(line, starting, ending)) // If isPalindrome returns true this condition will satisfy
    {
        cout << "This is a palindrome!!" << endl;
    }
    else // if isPalindrome returns false
    {
        cout << "This is not a Palindrome!!" << endl;
    }
}
