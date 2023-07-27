#include <iostream>
using namespace std;
#include <stdlib.h>
int main(){
    // heap application in c language
    int*ptr;
    ptr=(int*)malloc(5*(sizeof(int)));//initialized a pointer to an array inside heap and equated it to ptr.
    ptr[0]=43;ptr[1]=443;ptr[2]=56;ptr[3]=90;ptr[4]=9;
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

    //heap in c++
    int *p;
    p=new int[5];
    //an array of 5 int allocated in heap
    p[0]=12;
    p[1]=33;
    p[2]=45;
    p[3]=34;
    p[4]=22;
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }
    free(p);
    delete[] ptr;

}
