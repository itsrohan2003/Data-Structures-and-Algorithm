// to check whether the input is lowercase, uppercase or a numerical.
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "enter your character";
    cin >> c;
    if (c >= 'a' && c <= 'z')
    {
        cout << "this is lower case.";
    }
    else if (c >= 'A' && c <= 'Z')
    {
        cout << "this is upper case";
    }
    else
    {
        cout << "this is numerical";
    }
}
