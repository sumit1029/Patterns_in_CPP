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
    int i = 1;
    while (i <= n)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
        i++;
    }

    return 0;
}