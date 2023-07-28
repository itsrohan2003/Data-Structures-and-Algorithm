#include <iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int areafunct(rectangle r1){
    return r1.length*r1.breadth;
}
int main(){
    rectangle r={10,5};
    cout<<areafunct(r);
}//this will not change the actual r object. 