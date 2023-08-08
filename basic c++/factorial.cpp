#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){//base condition
        return 1;
    }
    else{//general consition
        return factorial(n-1)*n;
    }
}
int main(){
    cout<<factorial(10);
}
//time complexity = o(n).