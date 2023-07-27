#include <iostream>
using namespace std;
 struct rectangle{
        int length; //2 bytes
        int breadth; //2 bytes
        int area=length*breadth;//2 bytes
    };//6 bytes
int main(){
   rectangle r;
   r.breadth=33;
   r.length=45;
   cout<<r.breadth;
   cout<<r.length;
   cout<<endl;
   rectangle thh={10,44};
   cout<<thh.breadth<<thh.length<<endl;
   cout<<"the area of thh rectangle is "<<thh.area<<endl;
} 