#include <iostream>
using namespace std;
int main(){
    int arr1[3][4]={{1,2,3},{33,44,54},{43,45,99}};//initiated
    //dynamically creating array
    int *arr[3];//array of pointers to integer.
    arr[0]=new int[4];
    arr[1]=new int[4];
    arr[2]=new int[4];
    arr[1][2]=33;
    cout<<arr[1][2]<<endl;
    delete []arr;
}