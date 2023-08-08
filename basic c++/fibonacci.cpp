//using recursion for fibonacci series at o(n) time complexity. in a conventional recursion, it takes 0(2^n) time complexity.
#include <iostream>
using namespace std;
#include <vector>
vector <int> f(10,-1);
int fib(int n){
    if(n<=1){
        f[n]=n;
        return n;
    }
    else{
        if(f[n-1]==-1){//means that value is unkown. i.e function hasnt been called
        f[n-1]=fib(n-1);
        }
        if(f[n-2]==-1){
            f[n-2]=fib(n-2);
        }
        return f[n-1]+f[n-2];
    }
}
int main(){
    cout<<fib(7);
}