#include <iostream>
using namespace std;
//in left shift we loose one element in the last index of the array
//in rotation, the first element comes at the last place.
struct Array{
    int length;
    int size;
    int *a;
};
void reverse(Array * arr){//pointer which points to an Array struct
int *b;
int i,j;
int n=arr->length;
b=new int[n];
for(i=arr->length-1,j=0; i>=0;i--,j++){
    b[j]=arr->a[i];
}
for(i=0;i<arr->length;i++){
    arr->a[i]=b[i];
}
}
int main(){
    Array arr;
    arr.length=5;
    arr.a=new int[arr.length];
    arr.a[0]=1112;
    arr.a[1]=192;
    arr.a[2]=152;
    arr.a[3]=132;
    arr.a[4]=12;
    reverse(&arr);
    for(int i=0;i<5;i++){
        cout<<arr.a[i]<<" ";

    }
}