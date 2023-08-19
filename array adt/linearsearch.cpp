#include <iostream>
using namespace std;
struct Array{
    int length;
    int *a;
    int size;
};
int linearsearch(Array arr,int key){
    for(int i=0;i<arr.length;i++){
        if(arr.a[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    Array arr;
    arr.size=arr.length=5;
    arr.a=new int[arr.size];
    arr.a[0]=1;
    arr.a[2]=3;
    arr.a[3]=4;
    arr.a[4]=5;
    arr.a[1]=67;
    cout<<linearsearch(arr,90);
}