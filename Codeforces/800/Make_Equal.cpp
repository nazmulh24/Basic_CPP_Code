#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int max_element = sum / n, xy = max_element, b[n];
        for (int i = 0; i < n; i++)
        {
            if (a[i] < max_element)
            {
                cout << "NO" << endl;
                break;
            }
            else
            {
                b[i] = xy;
                xy = a[i] - xy;
            }
        }
        bool x = false;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == b[i + 1])
                x = true;
        }
        if (x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
