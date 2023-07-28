#include <iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
    int area;
};
void areafunction(rectangle &r1){
    r1.area=r1.length*r1.breadth;
}
int main(){
    rectangle r;
    r.length=10;
    r.breadth=5;
    areafunction(r);
    cout<<r.area<<endl;
}//now the function is accessing the variables in main function.