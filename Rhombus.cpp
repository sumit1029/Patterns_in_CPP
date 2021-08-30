#include <iostream>
using namespace std;

int main()
{
#ifndef Sumit
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 2 * n - i; j++)
        {
            if (j < n - i)
                cout << " "
                     << " ";
            else
                cout << "*"
                     << " ";
        }
        cout << endl;
    }

    return 0;
}