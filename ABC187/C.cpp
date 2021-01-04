#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<string> s(n),t(n);
    map<string, int> mp;
    string v;
    bool ans = false;
    rep(i,n) cin >> s.at(i);
    sort(s.begin(),s.end());
    rep(i,n){
        string u = s.at(i);
        if(u.at(0) == '!'){
            u.erase(0,1);
            mp[u]++;
        }
        else{
            if(mp[u] != 0){
                ans = true;
                v = u;
            }
        }
    }
    if(ans) cout << v << endl;
    else cout << "satisfiable" << endl;
}