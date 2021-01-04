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
  vector<vector<int>> d(n,vector<int>(2));
  rep(i,n){
    rep(j,2) cin >> d.at(i).at(j);
  }
  bool ans = false;
  int num = 0;
  rep(i,n){
    if(d.at(i).at(0) == d.at(i).at(1)){
      num++;
    }
    else num = 0;
    if(num == 3){
      ans = true;
      break;
    }
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}