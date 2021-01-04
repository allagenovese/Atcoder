#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);
    long long sum = 0;
    vector<pair<int , int>> num(n);
    long long ans = 0;
    long long suma = 0, sumb = 0;
    rep(i,n){
        cin >> a.at(i) >> b.at(i);
        suma += a[i];
        num.at(i) = make_pair(a[i]+a[i]+b[i], i);
    }
    sort(num.begin(), num.end());
    for(int i = n-1; i >= 0; i--){
        if(suma <= sumb) break;
        long long x, y;
        tie(x,y) = num.at(i);
        suma -= a[y];
        sumb += a[y]+b[y];
        ans++;
    }
    cout << ans << endl;
}