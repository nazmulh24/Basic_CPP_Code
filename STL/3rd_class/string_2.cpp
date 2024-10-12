#include <bits/stdc++.h>
using namespace std;
int main()
{
    //-->> iterator -------------------------------------------------
    string s= "Nazmul Hossain";
    string::iterator it;
    for (it = s.begin(); it != s.end(); it++) //-> print using iterator.
        cout << *it ;
    cout << endl;
    

    return 0;
}
