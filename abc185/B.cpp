#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n, m , t;
    cin >> n >> m >> t;
    vector<int> a(m),b(m);
    long long sum = n;
    rep(i,m){
        cin >> a[i] >> b[i];
    }
    bool ans = true;
    sum -= a[0];
    if(sum <= 0) ans = false;
    sum += b[0]-a[0];
    if(sum >= n) sum = n;
    for(int i = 1; i < m; i++){
        sum -= (a[i]-b[i-1]);
        if(sum <= 0) ans = false;
        sum += (b[i]-a[i]);
        if(sum >= n) sum = n;
    }
    sum -= (t-b[m-1]);
    if(sum <= 0) ans = false;
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

}