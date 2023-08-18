#include <iostream>
using namespace std;
struct Array{
    int *a;
    int size;
    int length;
};
void display(Array arr){
    int i;
    cout<<"elements are: ";
    for(i=0;i<arr.length;i++){
        cout<<arr.a[i]<<" ";
    }
}
int main(){
    Array arr;
    int n,i;
    cout<<"enter the size of the array : ";
    cin>>arr.size;
    arr.a=new int[arr.size];
    arr.length=0;
    cout<<"enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i<<"th element : ";
        cin>>arr.a[i];
    }
    arr.length=n;
    display(arr);
    delete []a;
    return 0;
}