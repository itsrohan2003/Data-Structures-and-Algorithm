#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle()
    {
        length = breadth = 1;
    }
    rectangle(int l, int b); // constructing overloading
    int area();              // facilitator
    int perimeter();
    int getlength()
    { // get function
        return length;
    }
    void setlength(int l)
    { // mutator function
        length = l;
    }
};
rectangle::rectangle(int l, int b)
{ // scope resolution
    length = l;
    breadth = b;
}
rectangle::area()
{
    return length * breadth;
}
rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int main(){
    rectangle r1(99,23);
    cout<<r1.getlength()<<endl;
    cout<<r1.area()<<endl;
}