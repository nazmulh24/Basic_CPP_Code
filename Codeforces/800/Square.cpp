#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x[4], y[4], area;
        for (int i = 0; i < 4; i++)
            cin >> x[i] >> y[i];
        if (a[0] == b[0]) 
            area = pow(b, 2);
        else if (b == 0)
            area = pow(a, 2);
        cout << area << endl;
    }
    return 0;
}
