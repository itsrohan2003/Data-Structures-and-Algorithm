#include <iostream>
using namespace std;
int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int combination(int n,int r){
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    return a/(b*c);
}
int main(){
    cout<<combination(5,2);
    
}

//time complexity=o(n);