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
    long long l;
    cin >> l;
    long long ans = 1;
    for(long long i = 1; i <= 11; i++){
        ans *= l-i;
        ans /= i;
    }
    cout << ans << endl;
}