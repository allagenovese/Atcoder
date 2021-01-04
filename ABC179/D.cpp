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
  int w, h, m , n;
  cin >> w, h, m, n;
  vector<long long> x(m), y(m), t(m), d(m), r(m), a(n), b(n);
  vector<vector<bool>> PB(h, vector<bool>(w));
}