#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n, x ;
    cin >> n >> x;
    x = x*100;
    vector<long long  > v(n), p(n);
    long long  sum = 0, ans = -1;
    rep(i,n){
        cin >> v[i] >> p[i];
        sum += v[i]*p[i];
        if(sum > x){
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
}