#include <iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    rectangle r{10,5};
    cout<<r.length<<endl;

    rectangle * ptr= &r;
    cout<<ptr->length<<endl;
    cout<<ptr->breadth<<endl;
    


    rectangle * p;
    p=new rectangle;
    p->length=33;
    p->breadth=15;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    free(p);

    return 0;

}