#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    int area;
    rectangle(int l, int b) // constructor to initialize
    {
        length = l;
        breadth = b;
    }
    int areacalc()
    {
        return length * breadth;
    }
};
int main()
{
    rectangle r(100, 24);
    r.areacalc();

    cout << "area of r: " << r.areacalc();
}