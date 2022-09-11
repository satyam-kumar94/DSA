
// sum of array elements
#include <iostream>
using namespace std;
int main()
{
    int arr[5], i, sum = 0;

    cout << "Enter Any 5 Element:";

    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum Of All Element:" << sum;

    return 0;
}