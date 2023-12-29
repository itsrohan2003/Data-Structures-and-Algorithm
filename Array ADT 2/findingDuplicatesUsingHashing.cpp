// given sorted array.
#include <iostream>
#include <vector>
using namespace std;
void FindDuplicates(int arr[],int n){
    vector<int> hash(arr[n-1]+1,0);
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