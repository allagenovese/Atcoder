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
    long long sum,n;
    sum = 0;
    n = s.size();
    rep(i,n){
        int m;
        m = s.at(i) - 48;
        sum += m;
    }
    if(sum % 9 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
