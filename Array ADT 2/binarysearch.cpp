#include <iostream>
using namespace std;
struct array
{
    int a[10];
    int size;
    int length;
};
// iteratvie function
int binaryearch(array arr, int key)
{
    int l, m, h;
    l = 0;
    h = arr.length - 1;
    m = l + (h - l) / 2;

    while (l <= h)
    {
        m = l + (h - l) / 2;
        if (key == arr.a[m])
        {
            return m;
        }
        else if (key < arr.a[m])
        {
            h = m - 1;
        }
        else if (key > arr.a[m])
        {
            l = m + 1;
        }
    }
    return -1;
}
// recursive function
int rbinsearch(int arr[], int key, int l, int h)
{
    int mid if (l <= h)
    {
        mid = l + (h - l) / 2;
        if (arr[mid] = key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            return rbinsearch(arr, key, l, mid - 1);
        }
        else
        {
            return rbinsearch(arr, key, mid + 1, h);
        }
    }
}
int main()
{
    array arr = {{1, 43, 55, 67, 76, 87, 99}, 10, 7};
    cout << binaryearch(arr, 87);
}