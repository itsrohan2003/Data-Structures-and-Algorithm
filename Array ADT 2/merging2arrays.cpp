#include <iostream>
using namespace std;
struct array
{
    int a[10];
    int size;
    int length;
};
array *merge(array *arr1, array *arr2)
{
    int i=0, j=0, k = 0;
    array *arr3 = new array;
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->a[i] < arr2->a[j])
        {
            arr3->a[k] = arr1->a[i];
            i++;
            k++;
        }
        else
        {
            arr3->a[k] = arr2->a[j];
            j++;
            k++;
        }
    }
    // if arr1 or arr2 is exhausted we copy the rest of the array
    for (; i < arr1->length; i++)
    {
        arr3->a[k++] = arr1->a[i];
    }
    for (; j < arr2->length; j++)
    {
        arr3->a[k++] = arr2->a[j];
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
}
void display(array *arr)
{
    cout << "the array is: " << endl;
    for (int i = 0; i < arr->length; i++)
    {
        cout << arr->a[i] << " ";
    }
}
int main()
{
    array arr1 = {{11, 23, 45, 67, 69}, 10, 5};
    array arr2 = {{3, 4, 7, 18, 20}, 10, 5};
    array *arr3;
    arr3 = merge(&arr1, &arr2);
    display(arr3);
}