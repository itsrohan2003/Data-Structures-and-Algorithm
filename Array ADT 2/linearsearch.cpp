#include <iostream>
using namespace std;
struct array{
    int a[10];
    int size;
    int length;
};
void swap(int* a,int* b){
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}

int linearsearch(array* arr, int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->a[i]){
            swap(&arr->a[i],&arr->a[i-1]);//transpositioning linearsearch
            //swap(&arr->a[i],&arr->a[0]); this is head movement.
            return i;
        }
    }
    return -1;
}
void display(array ar){
    cout<<"the elements of the array are: "<<endl;
    for(int i=0;i<ar.length;i++){
        cout<<ar.a[i]<<" ";
    }
}
int main(){
    array ar={{1,23,43,55,654},10,5};
    cout<<linearsearch(&ar,43);
    cout<<endl;
    cout<<linearsearch(&ar,43);
    cout<<endl;
    //moving the key element towards the first index, this is called transpositioning.
    display(ar);
}