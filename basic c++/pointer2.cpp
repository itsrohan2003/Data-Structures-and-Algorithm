#include <iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int *ptr;
    ptr=a;
    cout<<&a[0]<<endl;
    cout<<a<<endl;//a is the adress of the first element of the array.
    cout<<ptr<<endl;
    cout<<&a<<endl;//&a is the adress of the whole array
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<endl;
    }
}