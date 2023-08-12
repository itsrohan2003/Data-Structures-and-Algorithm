//using pascal triangle.
#include <iostream>
using namespace std;
int c(int n,int r){
    if((n==r)||(r==0)){//extreme points
        return 1;
    }
    else{
        return c(n-1,r-1)+c(n-1,r);
    }
}
int main(){
    cout<<c(5,2);
}