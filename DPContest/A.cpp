#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
const long long inf = 1LL << 60;
const long long mod = 1000000007;

int main(){
    long long n;
    cin >> n;
    vector<long long> h(n);
    rep(i,n) cin >> h[i];
    vector<long long > dp(n,inf);
    dp[0] = 0;
    for(int i = 1; i < n; i++){
        if(i == 1) dp[i] = abs(h[i]-h[i-1]);

        else{
            dp[i] = min(dp[i-1] + abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]) );
        }
    }
    cout << dp[n-1] << endl;
}