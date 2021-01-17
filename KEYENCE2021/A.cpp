#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> a(n), b(n),c(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    c.at(0) = a[0]*b[0];
    long long maxai = a[0];
    for(int i = 1; i < n; i++){
        if(maxai < a[i]) maxai = a[i];
        c.at(i) = max(maxai*b[i], c.at(i-1));
    }
    rep(i,n) cout << c.at(i) << endl;

}