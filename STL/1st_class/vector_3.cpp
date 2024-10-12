#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    -->
    vector<int> v(5); //->we can make array like this.
    // v.resize(5);
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    v[3] = 5; //-> we can change value of any index.
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    -->
    */

    // vector<int> v(10, 5); //-> we can fix the initial value of a vector.

    vector<int> v = {1, 3, 5, 7};
    vector<int> temp;
    
    temp = v; //-> Derect copy one vector to another vector.

    for (int i = 0; i < temp.size(); i++)
        cout << temp[i] << " ";
    cout << endl;

    return 0;
}
