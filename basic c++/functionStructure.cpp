#include <iostream>
using namespace std;
// create rectangle struct, area, and initialize functions as well.
struct rectangle
{
    int length;
    int breadth;
    int area;
};
void init(rectangle *ptr, int l, int b)
{
    ptr->length = l;
    ptr->breadth = b;
}
void areacalc(rectangle *p)
{
    p->area = (p->length) * (p->breadth);
}
int main()
{
    rectangle rec1;
    rectangle *p = &rec1; // or we could type - rectangle*p=new rectangle;
    init(p, 100, 35);
    areacalc(p);
    cout << "area of rectangle rec1: " << rec1.area << endl;
}