#include <iostream>
using namespace std;

int main()
{
#ifndef Sumit_Kumar
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}