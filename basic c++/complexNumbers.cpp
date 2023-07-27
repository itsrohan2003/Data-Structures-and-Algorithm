#include <iostream>
using namespace std;
struct complex{
    int real;
    int img;
};

struct student{
    int roll;
    char name[25];//25 bytes
    char dept[35];//35 bytes
    char address[40]; //40 bytes
};//total 2+35+40=77bytes;

int main(){
    student rohan={1234,"rohan","fjsjf","jfdjijoj"};
    cout<<rohan.name;
}