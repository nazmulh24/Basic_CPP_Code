#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, count = 0;
    cin >> n;
    bool isLucky = true;
    while (n != 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
        {
            cout << "NO" << endl;
            return 0;
        }
        n /= 10;
        count++;
    }
    if (count == 4 || count == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
