#include <iostream>
using namespace std;
int main(){
    int a[5];//array created with garbage values
    int b[5]={1,2};//0 and 1 index equal to 1 and 2, rest values 0
    int c[]={1,2,3,4};//size 4 array created wwith values 1,2,3,4
    int d[4]={1,2,3,4};//proper array declared 
    for(int i=0;i<4;i++){
        cout<<d[i]<<" ";
    }
}