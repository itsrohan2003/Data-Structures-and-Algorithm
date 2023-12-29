#include <iostream>
using namespace std;
struct array{
    int a[10];
    int size;
    int length;
};
int insertsort(array* arr,int x){
    if(arr->length==arr->size){
        return -1;
    }
    int i=arr->length-1;
    while(i>=0 && arr->a[i]>x){
        arr->a[i+1]=arr->a[i];//shift element to the right.
        i--;
    }
    arr->a[i+1]=x;
    arr->length++;
}
void display(array* ar){
    cout<<"the array is: "<<endl;
    for(int i=0;i<ar->length;i++){
        cout<<ar->a[i]<<" ";
    }
    cout<<endl;
}
bool isSorted(array* arr){
    int i;
    for(i=0;i<arr->length-1;i++){
        if(arr->a[i]>arr->a[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    array a2={{11,23,24,43,44},10,5};
    insertsort(&a2,29);
    display(&a2);
    cout<<isSorted(&a2);
    }
