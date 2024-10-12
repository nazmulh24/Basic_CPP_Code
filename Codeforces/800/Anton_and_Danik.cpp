#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, A = 0, D = 0;
    cin >> n;
    string s;
    cin >> s;
    for (auto c : s)
    {
        if (c == 'A')
            A++;
        else if (c == 'D')
            D++;
    }
    if (A > D)
        cout << "Anton" << endl;
    else if (A < D)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}
