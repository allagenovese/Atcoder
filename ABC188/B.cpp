#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long > a(n), b(n);
    long long sum = 0;
    rep(i,n){
        cin >> a[i];
    }
    rep(i,n) cin >> b[i];
    rep(i,n){
        sum += a[i]*b[i];
    }
    if(sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}