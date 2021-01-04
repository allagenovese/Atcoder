#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main() {
    string s = "abcde";
    cout << s.size() << endl;;
    s.erase(s.begin());
    cout << s.size() << ":" << s << endl;
    cout << s.at(0) << endl;
}
    
    