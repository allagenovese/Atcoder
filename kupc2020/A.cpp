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
  int n;
  cin >> n;
  vector<int> x(n),y(n);
  long long ans = 0;
  rep(i,n) cin >> x.at(i) >> y.at(i);
  rep(i,n-1){
    ans += max(x.at(i),x.at(i+1))-min(x.at(i),x.at(i+1));
    ans += max(y.at(i),y.at(i+1))-min(y.at(i),y.at(i+1));
  }
  cout << ans << endl;
}