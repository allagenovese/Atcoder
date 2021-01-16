#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){

    long long n;
    cin >> n;
    vector<long long > a(n), b(n), c(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) cin >> c[i];

    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    long long ans = 0;
    for(long long  i = 0; i < n; i++){
        long long key = b[i];
        auto iter_a = lower_bound(a.begin(), a.end(), key);
        auto iter_c = upper_bound(c.begin(), c.end(), key);
        long long index_a, index_c;
        index_a = iter_a - a.begin();

        index_c = c.end()-iter_c;

        if(index_c >= 0 && index_a >= 0) ans += index_a*index_c;

    }
    cout << ans << endl;

}