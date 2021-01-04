#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    string s;
    cin >> s;
    long long r = 0 , b = 0;
    rep(i,s.size()){
        if(s.at(i) == '0') r++;
        else b++;
    }
    cout << 2*min(r,b) << endl;
}