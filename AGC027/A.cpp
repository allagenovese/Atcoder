#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n,x;
    cin >> n >> x; 
    vector<long long> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    long long ans = 0;
    rep(i,n-1){
        if(a.at(i) <= x ){
            ans++;
            x -= a.at(i);
        }
        else break;
    }
    if(x != 0){
        if(x == a.at(n-1)) ans++;
    }
    cout << ans << endl;
}