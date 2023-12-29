#include <iostream>
using namespace std;
//reversing an array using swapping
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[5]={11,13,45,65,33};
    reverse(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}