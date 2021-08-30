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
    while (r--)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}