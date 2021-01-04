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
  string s;
  cin >> s;
  int ans = 0;
  int n = s.size();
  int cnt = 0;
  int i = 0;
  while(i < n){
    if(s.at(i) == 'R'){
      cnt++;
      if(ans < cnt) ans = cnt;
    }
    else{
      if(ans < cnt ) ans = cnt;
      cnt = 0;
    }
    ++i;
  }
  cout << ans << endl;
}