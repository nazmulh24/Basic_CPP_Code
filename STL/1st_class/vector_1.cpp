#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];      //-> array.
    vector<int> v;  //-> vector...dynamic
    v.push_back(2); //-> index i[0]=2.
    v.push_back(3); //-> index i[1]=3.
    v.push_back(5); //-> index i[2]=5.

    int Size = v.size(); //-> To find vector size.
    cout << "Size of the vector : " << Size << endl;

    for (int i = 0; i < v.size(); i++) //-> To print vector.
        cout << v[i] << " ";
    cout << endl;

    // cout << "i[0] : " << v[0] << endl;
    // cout << "i[1] : " << v[1] << endl;
    // cout << "i[2] : " << v[2] << endl;
    cout << "Not initialize ->i[3] : " << v[3] << endl;

    v[1] = 4; //-> change value of v[1].
    cout << "changed -> i[1] : " << v[1] << endl;

    return 0;
}
