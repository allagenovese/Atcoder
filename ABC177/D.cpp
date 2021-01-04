#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
#define ll long long 
int sumdigital(int n){
  int sum = 0;
  while(n>0){
    sum += n % 10;
    n /= 10;
  }
  return sum;  
}
using namespace std;
int main(){
  ll n, x;
  cin >> n >> x;
  vector<ll> a(n);
  int sum = 0;
  rep(i,n){
    cin >> a.at(i);
    sum += a.at(i);
  }
  if(sum == x) cout << n << endl;
  else if(sum < x){
    cout << n-1 << endl;
  }
  else{
    ll ans = 0;
    sort(a.begin(),a.end());
    rep(i,n){
      if(a.at(i) <= x){
        ans++;
        x -= a.at(i);
      }
      else break;
    }
    cout << ans << endl;
  }
}