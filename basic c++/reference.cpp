#include <iostream>
using namespace std;
int main(){
    int a=100;
    int &r=a;//reference variable initialized
    r++;
    cout<<a;
}