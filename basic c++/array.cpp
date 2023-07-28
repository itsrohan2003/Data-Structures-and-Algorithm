#include <iostream>
using namespace std;
void func(int *ptr,int n){
    ptr=new int[n];
    for(int i=0;i<n;i++){
        ptr[i]=i+1;
        cout<<ptr[i];
    }
}
int main(){
    int * p;
    func(p,9);

}