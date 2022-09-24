// to make a table for farheneit to celcius.
// c=(f-32)*5/9
#include <iostream>
using namespace std;
int main()
{
    float i;
    cout << "enter the tempreature you want to start from: ";
    cin >> i;
    float n;
    cout << "\nenter a digit upto which you want to make the table: ";
    cin >> n;
    while (i <= n)
    {
        cout << i << " f ------> " << (i - 32) * 5 / 9 << " c" << endl;
        i = i + 1;
    }
}