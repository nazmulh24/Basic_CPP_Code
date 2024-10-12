#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, count;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        sort(a, a + n);
        count = a[n - 1] - a[0];
        cout << count << endl;
    }
    return 0;
}
