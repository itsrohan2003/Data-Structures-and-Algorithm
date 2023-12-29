#include <iostream>
// initialization of array
using namespace std;
// creating array with heap
struct array{
    int *a;
    int length;
    int size;
};
struct array2{
    int a[20];
    int size;
    int length;
};
void display(array ar){
    cout<<"the elements of the array are: "<<endl;
    for(int i=0;i<ar.length;i++){
        cout<<ar.a[i]<<" ";
    }
}
void display2(array2 ar){
    cout<<"the elements of the array are: "<<endl;
    for(int i=0;i<ar.length;i++){
        cout<<ar.a[i]<<" ";
    }
}
int main(){
    array arr;
    cout<<"enter the size of the array : ";
    cin>>arr.size;
    arr.a=new int[arr.size];
    int n;
    cout<<"enter the number of elements: "<<endl;
    cin>>n;
    cout<<"enter all the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr.a[i];
    }
    cout<<endl;
    arr.length=n;
    display(arr);
    delete [] arr.a;

    //initialising an array using stack memory
    array2 arr2{{1,2,3,4,5},20,5};
    display2(arr2);

}