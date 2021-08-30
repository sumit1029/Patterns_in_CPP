#include <iostream>
using namespace std;

int main()
{
#ifndef Sumit_Kumar
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        if (i == 0 || i == r - 1)
        {
            for (int j = 0; j < c; j++)
            {
                cout << "*"
                     << " ";
            }
        }
        else
        {
            for (int j = 0; j < c; j++)
            {
                if (j == 0 || j == c - 1)
                    cout << "*"
                         << " ";
                else
                    cout << " "
                         << " ";
            }
        }
        cout << endl;
    }
}