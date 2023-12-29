#include <iostream>
using namespace std;
int getMissingValue(int arr[], int n)
{
    int *temp = new int[n];
    // n is the range of the main array.
    int sum_temp = n * (n + 1) / 2;
    int sum_main = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum_main += arr[i];
    }
    int ans = sum_temp - sum_main;
    return ans;
    delete[] temp;
}
// driver code
int main()
{
    int arr1[]={1,2,3,6,5,7};
    cout<<getMissingValue(arr1,7);
}