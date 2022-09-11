// saydigits
#include <iostream>
using namespace std;

void sayDigits(int n, string arr[])
{

    if (n == 0)
        return;

    int Digits = n % 10;
    n = n / 10;

    sayDigits(n, arr);
    cout << arr[Digits] << " ";
}

int main()
{
    string arr[5] = {"zero", "one", "two", "three", "four"};

    int n;
    cin >>n;
    cout << endl << endl << endl;
    sayDigits(n, arr);
    cout << endl << endl<< endl;
}