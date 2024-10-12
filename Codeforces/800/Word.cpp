#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count1 = 0, count2 = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            count1++;
        else
            count2++;
    }
    if (count1 > count2)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}
