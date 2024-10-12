#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[4];
    for (int i = 0; i < 4; i++)
        cin >> x[i];
    sort(x, x + 4);
    int a, b, c;
    c = x[3] - x[0];
    b = x[2] - c;
    a = x[3] - x[2];
    cout << a << " " << b << " " << c << endl;
    return 0;
}
