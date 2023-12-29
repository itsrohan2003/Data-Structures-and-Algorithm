#include <iostream>
using namespace std;
struct array{
    int a[10];
    int length;
    int size;
};
void display(array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.a[i]<<" ";
    }
    cout<<endl;
}
void append(array* ar, int x){
    if(ar->length<ar->size){
        ar->a[ar->length++]=x;
    }
}
//insertinginto the array.
void insert(array* ar, int index,int x){
    if(index>=0 && index<=ar->length){
        for(int i=ar->length;i>index;i--){
            ar->a[i]=ar->a[i-1];
        }
        ar->a[index]=x;
        ar->length++;
        
    }

}
int main(){
    array arr={{1,22,23,43,3},5,10};
    insert(&arr,3,99999);
    display(arr);
    append(&arr,10);
    display(arr);
}