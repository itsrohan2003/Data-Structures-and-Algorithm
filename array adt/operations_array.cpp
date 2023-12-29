#include <iostream>
using namespace std;
struct Array{
    int length;
    int size;
    int *a;
};
int get(Array arr,int index){
    if(index>=0 && index<=arr.length){
        return arr.a[index];
    }
    return -1;
}
void set(Array arr,int value,int index){
    if(index>=0 && index<=arr.length){
        arr.a[index]=value;
    }
}
int max(Array arr){
    int max=arr.a[0];
    for(int i=1;i<arr.length;i++){
        if(arr.a[i]>max){
            max=arr.a[i];
        }
    }
    return max;
}
int add(Array arr){
    int sum=0;
    for(int i=0;i<arr.length;i++){
        sum=arr.a[i]+sum;
    }
    return sum;
}
float average(Array arr){
    return add(arr)/arr.length;
}
int main(){

    Array arr;
    arr.a=new int[5];
    arr.length=5;
    arr.a[0]=12;
    arr.a[1]=21;
    arr.a[2]=43;
    arr.a[3]=55;
    arr.a[4]=78;
    cout<<get(arr,4)<<endl;
    set(arr,244,2);
    cout<<get(arr,2)<<endl;
    cout<<max(arr)<<endl;
    cout<<add(arr)<<endl;
    cout<<average(arr);

}