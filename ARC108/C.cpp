#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    string s = "abcdefghijklmnopq";
    cout << s << endl;
    s.erase(1,1+2);
    cout << s << endl;
    cout << s.at(0) << " " << s.at(3) << endl;
}