#include <iostream>
using namespace std;
int main(){
    int *p = new int[2];
    p[0]=4;
    p[1]=34;
    for(int i=0;i<2;i++){
        cout<<p[i]<<" ";//just like a normal array
    }
    delete []p;
}