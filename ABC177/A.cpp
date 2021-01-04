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
  long long d, t, s;
  cin >> d >> t >> s;
  if(d%s == 0){
    if((d/s) <= t ) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  else if(d/s < t ) cout << "Yes" << endl;
  else cout << "No" << endl;
}