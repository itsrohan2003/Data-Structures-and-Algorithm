#include <iostream>
using namespace std;
void findPair(int arr[], int n, int k)
{
    int i = 0, j = n - 1;
    while (i != j)
    {
        if (arr[i] + arr[j] < k)
        {
            i++;
        }
        else if (arr[i] + arr[j] > k)
        {
            j--;
        }
        else
        {
            cout << "the pair found is: " << arr[i] << " + " << arr[j] << endl;

            i++;
            j--;
        }
    }
}
//tc o(n). linear
int main()
{
    int arr[] = {1, 12, 23, 45, 66, 78, 88, 99};
    findPair(arr, 8, 100);
}