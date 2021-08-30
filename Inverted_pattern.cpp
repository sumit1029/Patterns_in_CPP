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
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = 0; j < n - i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}