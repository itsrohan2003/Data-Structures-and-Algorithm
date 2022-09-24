//this is a program to check whether a given number is prime or not.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number which you want to check for prime: ";
    cin >> n;
    int i = 2;
    int count = 0;
    while (i < n)
    {
        if ((n % i) == 0)
        {
            count++;
        }
        i = i + 1;
    }
    if (count > 0)
    {
        cout << "the number is not prime." << endl;
    }
    else if (n == 1)
    {
        cout << "the number is composite." << endl;
    }
    else if (n == 2)
    {
        cout << "the number is prime" << endl;
    }
    else
    {
        cout << "enter a positive number" << endl;
    }
}