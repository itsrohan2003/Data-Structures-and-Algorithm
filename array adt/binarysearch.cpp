#include <iostream>
using namespace std;
struct Array
{
    int length;
    int size;
    int *a;
};
// in binary search, the array should always be sorted.
int binarysearch(Array arr, int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;
    mid=h+((l-h)/2);
    while(l<=h){
        if(arr.a[mid]==key){
            return mid;
        }
        else if(arr.a[mid]>key){
            h=mid-1;
            mid=h+((l-h)/2);
        }
        else if(arr.a[mid]<key){
            l=mid+1;
            mid=h+((l-h)/2);
        }
    }
    return -1;
}
int main(){
    Array arr;
    arr.a=new int[5];
    arr.a[0]=12;
    arr.a[1]=15;
    arr.a[2]=17;
    arr.a[3]=24;
    arr.a[4]=67;
    arr.length=arr.size=5;
    cout<<binarysearch(arr,67);
}
//time complexity is o(logn)