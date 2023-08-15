#include <iostream>
using namespace std;
int main(){
    int *p=new int[3];
    p[0]=1;
    p[1]=12;
    p[2]=13;
    int *q=new int[5];
    for(int i=0;i<3;i++){
        q[i]=p[i];
    }
    delete []p;
    p=q;
    q=NULL;
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }
    delete []p;
}
//this is the only way an array size can be increased. this is because we dont know if the next contagious memory location is free or not. if it is not free, it cannot be done.
