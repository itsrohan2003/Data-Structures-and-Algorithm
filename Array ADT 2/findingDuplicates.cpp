#include <iostream>
using namespace std;
void findingDuplicates(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int j=i+1;
        if(arr[i]==arr[i+1]){
            while(arr[i]==arr[j]){
                j++;
            }
            cout<<arr[i]<<" repeated "<<j-i<<" times"<<endl;
        }
        i=j-1;
    }
}

int main(){
    int arr[]={12,12,23,44,55,55,55,67,89};
    findingDuplicates(arr,9);
    cout<<"hello";
    return 0;
}
