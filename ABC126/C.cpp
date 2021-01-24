#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long double n, k;
    cin >> n >> k;
    double ans = 0;
    for(int i = 1; i <= n; i++){
        long long num = i;
        long double m = 1/n;
        while(num < k){
            num *= 2;
            m *= 0.5;
        }
        ans += m;
    }
    cout << fixed << setprecision(15) << ans << endl;
}