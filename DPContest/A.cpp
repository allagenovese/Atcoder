#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
const long long inf = 1LL << 60;
const long long mod = 1000000007; 
template<class T> void chmin(T & a, T b){
    if(a > b){
        a = b;
    }
}

int main(){
    long long n;
    cin >> n;
    vector<long long> h(n);
    rep(i,n) cin >> h[i];
    vector<long long> dp(n, inf);

    dp[0] = 0;
    
    for(int i = 1; i < n; i++){
        chmin(dp[i], dp[i-1]+abs(h[i]-h[i-1]) );
        if(i > 1){
            chmin(dp[i], dp[i-2]+abs(h[i]-h[i-2]));
        }
    }
    cout << dp[n-1] << endl;
}