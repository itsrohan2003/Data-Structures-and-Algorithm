#include <iostream>
using namespace std;
struct Array
{
    int *a;
    int size;
    int length;
};
// length is number of elements and size is the max number of elements that can be accomodated.
void insert(Array arr, int index, int value)
{
    for (int i = arr.length; i > index; i)
    {
        arr.a[i]=arr.a[i-1];
    }
    arr.a[index]=value;
    arr.length++;
}//function to insert an element in an array created.
//time complexity=o(n).
//best case is inserting an element at a[length]
//worst case is inserting an element at a[0].