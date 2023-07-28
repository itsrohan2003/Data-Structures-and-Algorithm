#include <iostream>
using namespace std;
int area(int l,int b){
    return l*b;
}
int perimeter(int l,int b){
    return 2*(l+b);
}
int main(){
    int length;
    int breadth;
    cout<<"enter the length of the rectangle: ";
    cin>>length;
    cout<<endl;
    cout<<"enter the breadth of the rectangle: ";
    cin>>breadth;
    cout<<endl;
    cout<<"the area of the rectangle is: "<<area(length,breadth)<<endl;
    cout<<"the perimeter of the rectangle is: "<<perimeter(length,breadth);
}