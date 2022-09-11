//  problem of codestudio
#include <iostream>
using namespace std;

int climbstairs(int n)
{
    if (n < 0)
        return 0;
    if (n == 1)
        return 1;
    int penultimate = climbstairs(n - 1);
    int antepenultimate = climbstairs(n - 2);
    return penultimate + antepenultimate;
}

int main(void)
{
    int n;
    cin >> n;
    cout << climbstairs(n) << endl;
    return 0;
}