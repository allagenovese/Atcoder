#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
#define ll long long
using namespace std;
int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { // n が 0 になるまで
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >>a.at(i);
    ll ans = 0, ma = a.at(0);
    rep(i,n){
      if(a.at(i) < ma){
        ans += ma - a.at(i);
        a.at(i) = ma; 
      }
      else ma = a.at(i);
    }
    cout << ans << endl;
}