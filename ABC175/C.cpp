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
    long long x,k,d;
    cin >> x >> k >> d;
    x = abs(x);
    if( k < x/d ){
      cout << x - k*d << endl;
    }
    else if(x == k*d ) cout << 0 << endl;
    else{
      long long num = x/d;
      x -= d*(num+1);
      k = k-num-1;
      if(k % 2 == 0) cout << abs(x) << endl;
      else cout << x +d << endl;
    }
}


