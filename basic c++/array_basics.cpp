#include <iostream>
using namespace std;
int main(){
    int b[7]={2,22,34,5};
    cout<<b[6];
    for(int i=0;i<7;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    //using for each loop
    for(int x:b){
        cout<<x<<" ";
    }
    return 0;
}