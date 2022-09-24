//find some till n digits.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a digit upto which numbers are to be printed.";
    cin>>n;
    int i=0;
    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }
    //to find the sum till n digits.
    i=0;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"\nthe sum till "<<n<<" digits is: "<<sum;
    //to find the sum of only even number.
    sum=0;
    i=0;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<"\nthe sum of even digits is: "<<sum;
} 