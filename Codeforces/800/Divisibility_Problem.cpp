#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, rem, count;
        cin >> a >> b;
        rem = a % b;
        count = (rem == 0) ? 0 : b - rem;
        cout << count << endl;
    }
    return 0;
}
