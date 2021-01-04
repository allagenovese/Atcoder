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
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long e, f , g , h;
    e = a * c;
    f = a * d;
    g = b * c;
    h = b * d;
    vector<long long> x(4);
    x.at(0) = e;
    x.at(1) = f;
    x.at(2) = g;
    x.at(3) = h;
    sort(x.begin(), x.end());
    cout << x.at(3) << endl;
}