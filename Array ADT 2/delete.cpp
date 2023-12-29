#include <iostream>
using namespace std;
struct array{
    int a[10];
    int length;
};
void display(array* arr){
    cout<<"the elements are: "<<endl;
    for(int i=0;i<arr->length;i++){
        cout<<arr->a[i]<<" ";
    }
}
int delete1(array* arr,int index){
    int x=0;
    if(index>=0 && index<=arr->length-1){
        x=arr->a[index];
        for(int i=index;i<arr->length;i++){
            arr->a[i]=arr->a[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
int main(){
    array arr2={{11,23,43,43,55},5};
    display(&arr2);
    delete1(&arr2,3);
    display(&arr2);
}