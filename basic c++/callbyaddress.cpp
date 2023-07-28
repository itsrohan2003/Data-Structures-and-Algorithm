#include <iostream>
using namespace std;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a = 33;
    int b = 46;
    cout << "value of a before: " << a << endl;
    cout << "value of b before: " << b << endl;

    swap(&a, &b);
    cout << "value of a after: " << a << endl;
    cout << "value of b after: " << b << endl;

    return 0;
}