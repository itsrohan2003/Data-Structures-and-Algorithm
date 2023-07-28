#include <iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
void changelength(rectangle *r1){
    r1->length++;//length of the struct which is pointed by the r1 pointer.
}
int main(){
    rectangle r={10,5};
    changelength(&r);
    cout<<r.length<<endl;//length incremented

}