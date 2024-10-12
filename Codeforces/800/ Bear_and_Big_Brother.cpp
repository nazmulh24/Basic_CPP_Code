#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, count = 1;
    cin >> a >> b;
    while (1)
    {
        a = a * 3;
        b = b * 2;
        if (a > b)
        {
            cout << count << endl;
            return 0;
        }
        count++;
    }
    return 0;
}
