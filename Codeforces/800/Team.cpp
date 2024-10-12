#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        if ((arr[0] == 1 && arr[1] == 1) || (arr[1] == 1 && arr[2] == 1) || (arr[0] == 1 && arr[2] == 1))
            count++;
    }
    cout << count << endl;
    return 0;
}
