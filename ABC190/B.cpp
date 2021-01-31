#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
const long long mod = 1000000007;
using namespace std;
int main(){
    long long n, s, d;
    cin >> n >> s >> d;
    vector<long long > x(n), y(n);
    bool ans = false;
    rep(i,n){
        cin >> x[i] >> y[i];
        if(x[i] < s && y[i] > d ){
            ans = true;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

}