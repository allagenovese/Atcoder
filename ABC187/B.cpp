#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long double> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];
    long long ans = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            long double a;
            a = (y[j]-y[i])/(x[j]-x[i]);
            if( -1 <= a && a <= 1) ans++;
        }
    }
    cout << ans << endl;
}