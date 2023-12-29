#include <iostream>
using namespace std;
struct Array{
    int length;
    int size;
    int *a;
};
void insert(Array * arr,int value){
    int i=arr->length-1;
    arr->length++;
    while(i>=0 && arr->a[i]>value){
        arr->a[i+1]=arr->a[i];
        i--;
    }
    arr->a[i+1]=value;

}
int main(){
    Array arr;
    arr.length=5;
    arr.a=new int[arr.length];
    arr.a[0]=123;
    arr.a[1]=125;
    arr.a[2]=127;
    arr.a[3]=129;
    arr.a[4]=12133;
    insert(&arr,4500);
    for(int i=0;i<arr.length;i++){
        cout<<arr.a[i]<<" ";
    }


}