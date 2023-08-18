#include <iostream>
using namespace std;
struct Array{
    int *a;//pointer to the array
    int length;//last index = length-1;
    int size;
};
void delete(Array arr,int index){
    //we will shift the elements in place of deleted element.
    for(int i=index;i<length-1;i++){
        arr.a[i]=arr.a[i+1];
    }
    arr.length--;
}//time complexity = o(n).
int main(){

}
