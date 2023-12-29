// given unsorted array.
#include <iostream>
#include <vector>
using namespace std;
int max_element(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
void FindDuplicates(int arr[],int n){
    vector<int> hash(max_element(arr,n)+1,0);
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<hash.size();i++){
        if(hash[i]>1){
            cout<<i<<" repeated "<<hash[i]<<" times"<<endl;
        }
    }
}
int main(){
    int arr[]={1,1,1,23,33,45,66,66,66,66,78};
    FindDuplicates(arr,11);
}
//tc o(n)