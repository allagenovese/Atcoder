#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    string s,t;
    cin >> n >> s;
    long long ans = 0;
    while(s.empty() != true){
        t += s[0];
        s.erase(0,1);
        if(t[t.size()-1] == 'x' && t[t.size()-2] == 'o' 
        && t[t.size()-3] == 'f' ) t.erase(t.size()-3,3);
    }
    cout << t.size() << endl;
}