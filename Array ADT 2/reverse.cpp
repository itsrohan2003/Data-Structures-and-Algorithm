#include <iostream>
using namespace std;
struct array{
    int a[10];
    int size;
    int length;
};
void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void display(array* arr){
    cout<<"the elements of the array are: "<<endl;
    for(int i=0;i<arr->length;i++){
        cout<<arr->a[i]<<" ";
    }
}
void reverse(array *arr){
    int *b;
    int i,j;
    b=new int[arr->length];
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        b[j]=arr->a[i];
    }
    for(i=0;i<arr->length;i++){
        arr->a[i]=b[i];
    }

}
//this saves more space.
void reverse2(array* arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        swap(&arr->a[i],&arr->a[j]);
    }
}
int main(){
    array sakkss={{11,23,45,33,56},10,5};
    reverse2(&sakkss);
    display(&sakkss);

}