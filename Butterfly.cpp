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
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                if (j <= i || j >= 2 * n - 1 - i)
                {
                    cout << "*"
                         << " ";
                }
                else
                {
                    cout << " "
                         << " ";
                }
            }
        }
        else
        {
            for (int j = 0; j < 2 * n; j++)
            {
                if (j >= i || j <= 2 * n - 1 - i)
                {
                    cout << "*"
                         << " ";
                }
                else
                {
                    cout << " "
                         << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}