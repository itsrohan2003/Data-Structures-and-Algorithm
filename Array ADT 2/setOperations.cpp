#include <iostream>
using namespace std;
struct array
{
    int a[10];
    int size;
    int length;
};
//finding the union of two sets.
array *Union(array *arr1, array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    array *arr3 = new array;
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->a[i] < arr2->a[j])
        {
            arr3->a[k] = arr1->a[i];
            k++;
            i++;
        }
        else if (arr1->a[i] == arr2->a[j])
        {
            arr3->a[k] = arr1->a[i];
            i++;
            j++;
            k++;
        }
        else
        {
            arr3->a[k] = arr2->a[j];
            k++;
            j++;
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->a[k] = arr1->a[i];
        k++;
    }
    for (; j < arr2->length; j++)
    {
        arr3->a[k] = arr2->a[j];
        k++;
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;
}
//finding the itnersection of two sets
array* intersection(array* arr1,array* arr2){
    {
    int i, j, k;
    i = j = k = 0;
    array *arr3 = new array;
    while (i < arr1->length && j < arr2->length)
    {

        if (arr1->a[i] == arr2->a[j])
        {
            arr3->a[k] = arr1->a[i];
            i++;
            j++;
            k++;
        }
        else if(arr1->a[i]>arr2->a[j]){
            j++;
        }
        else{
            i++;
        }
    }
    arr3->length = k;
    arr3->size = 10;

    return arr3;
}}

array* differnece(array* arr1,array* arr2){
    {
    int i, j, k;
    i = j = k = 0;
    array *arr3 = new array;
    while (i < arr1->length && j < arr2->length)
    {
        if(arr1->a[i]<arr2->a[j]){
            arr3->a[k]=arr1->a[i];
            i++;
            k++;
            }
        else if(arr2->a[j]<arr1->a[i]){
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    for(;i<arr1->length;i++){
        arr3->a[k]=arr1->a[i];
        k++;
    }
    arr3->length = k;
    arr3->size = 10;

    return arr3;
}}

void display(array *arr)
{
    cout << "the elements of the array are: " << endl;
    for (int i = 0; i < arr->length; i++)
    {
        cout << arr->a[i] << " ";
    }
    cout<<endl;
}
int main()
{
    array arr1{{2, 6, 10, 15, 20}, 10, 5};
    array arr2{{2, 4, 7, 18,55}, 10, 5};
    array *arr3;
    arr3 = Union(&arr1, &arr2);
    array* arr4;
    arr4=intersection(&arr1, &arr2);
    array* arr5;
    arr5=differnece(&arr1,&arr2);
    display(arr4);
    display(arr3);
    display(arr5);
}