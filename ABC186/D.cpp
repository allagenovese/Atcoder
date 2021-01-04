#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long > a(n);
    long long ans = 0;
    rep(i,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    rep(i,n){
        ans += i*a[i]-(n-1-i)*a[i];
    }
    cout << ans << endl;
}