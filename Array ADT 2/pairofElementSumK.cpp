#include <iostream>
#include <vector>
using namespace std;
//count pairs with given sum
// no duplicates. perform with unique elements
//naive method o(n2)
int countPair1 (int arr[],int n,int k){
    int count=0;
    for (int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                count++; 
            }
        }
    }
    return count;
}
int max_element(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
//using hashing 
void returnPair(int arr[],int n,int k){
    vector<int> hash(max_element(arr,n)+1,0);
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    } 
    for(int i=0;i<n;i++){
        if(hash[k-arr[i]]==1){
            cout<<"the pair found is "<<arr[i]<<" + "<<k-arr[i]<<endl;
            hash[arr[i]]++;//to avoid accessing the same element
        }
    }
}
//o(n)


//driver code
int main(){
    int arr[]={11,9,42,44,34,15,5,13,7};
    returnPair(arr,9,20);
    cout<<"hello world";
    return 0;
}