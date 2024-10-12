#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a % 2 == 0 && b % 2 == 0)
            cout << "Yes" << endl;
        else if (a % 2 != 0 && b % 2 != 0)
            cout << "No" << endl;
        else
        {
            int x, y;
            x = (a % 2 == 0) ? a : b;
            x = x / 2;
            y = (a % 2 == 0) ? b : a;
            if (x == y)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
    return 0;
}
