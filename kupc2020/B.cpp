#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
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
  long long mod = 1000000007;
  long long  n,k;
  cin >> n >> k;   
  vector<vector<long long>> v(n, vector<long long>(k));
  rep(i,n){
    rep(j,k) cin >> v.at(i).at(j);
    sort(v.begin(),v.end());
  }
  long long ans = 0;
  for(int i = 0; i < n-1; i++){
    
    for(int j = k-1; k )
  }
}