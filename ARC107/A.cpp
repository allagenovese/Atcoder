#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    long long ans = 0;
    long long mod =  998244353; 
    long long A = 0, B = 0, C = 0;
    A = (a*(a+1)/2)% mod;
    B = (b*(b+1)/2)% mod;
    C = (c*(c+1)/2)% mod;
    ans = (A*B)%mod;
    ans *= C;
    ans %= mod;
    cout << ans << endl;
}