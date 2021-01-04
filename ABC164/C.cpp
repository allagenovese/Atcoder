#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<string> s(n);
    map<string, int>mp;
    long long ans = 0;
    rep(i,n){
        cin >> s[i];
        mp[s[i]]++;
        if(mp[s[i]] == 1)ans++;
    }
    cout << ans << endl;
}