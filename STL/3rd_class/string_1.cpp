#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // s = s + 'a'; //-> s = "a"
    // s += 'b';    //-> s = "ab"
    // s += 'c';    //-> s = "abc"
    // cout << s << endl;

    // string s = "Nazmul";
    // s += ' ';
    // s += 'H';
    // s += 'o';
    // s += 's';
    // s += 's';
    // s += 'a';
    // s += 'i';
    // s += 'n';
    // s += '.';
    // cout << s << endl;

    // string s = "Nazmul";
    // cout << s.size() << endl;

    // string s = "Nazmul";
    // cout << s[0] << "_" << s[1] << s[2] << endl;
    // s[0] = 'M';
    // cout << s[0] << "_" << s[1] << s[2] << endl;

    // string s, s1="Nazmul", s2="Hossain.";
    // char c = ' ';
    // s = s1 + c + s2;  //-->> s += s1; s += c; s += s2;
    // cout << s << endl;

    string s = "Nazmul", s1 = "Hossain";
    s.clear();                 //->> To clear string.
    cout << s.empty() << endl; //-> Is empty print -> 1 ___ if not print -> 0...
    cout << s << endl;         //->> print clear_Empty string.
    s = s1;
    cout << s << " " << s.empty() << endl;

    return 0;
}
