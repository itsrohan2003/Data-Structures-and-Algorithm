#include <iostream>
using namespace std;
void fun(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
    int main()
    {
        int arr[] = {1, 2, 3, 4, 5};
        int n = 5;
        for (int x : arr)
        {
            cout << x << " ";
        }
        cout<<endl;
        fun(&arr[0],5);
        return 0;
    }

    //int * arr = int arr[] int * arr is actually the pointer variable which stores the address of the first element of the array.
    //arr = &arr[0] arr is actually the address of the first element of the array
    //while calling an array, we have to call by giving the address of the first element of the array. either it is arr or &arr[0].