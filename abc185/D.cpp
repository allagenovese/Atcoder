#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
long long factrorial(long long n){
    long long m = 1;
    for(long long i = 1; i <= n; i++){
        m *= i;
        m % 1000000007;
    }
    return m;
}
using namespace std;
int main(){
    long long n,m,k;
    k = 1000000000;
    cin >> n >> m;
    vector<long long > a(m);
    vector<long long> b(m+1);
    if( m == 0) cout << 1 << endl;
    else{
        rep(i,m) cin >> a[i]; 
        sort(a.begin(),a.end());
        rep(i,m){
            if(i == 0){
                if(a[i] == 1){
                    b[i] = 0;
                }
                else{
                    if(a[i]-1 < k) k = a[i]-1;
                    b[i] = a[i]-1;
                }
            }
            else{
                b[i] = a[i]-a[i-1]-1;
                if(a[i]-a[i-1]-1 > 0){
                    if(a[i]-a[i-1]-1 < k) k = a[i]-a[i-1]-1;
                }
            }
        }
        b[m] = n-a[m-1];
        long long ans = 0;
        rep(i,m+1){
            if(b[i] != 0){
                if(b[i] % k == 0) ans += b[i]/k;
                else ans += b[i]/k + 1;
            }
        }
        cout << ans << endl;
    }
}