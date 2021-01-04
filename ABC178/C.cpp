#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (long long i = 0; i < (int)(n); i++ )
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
    long long n;
    cin >> n;
    int mod = 1000000007;
    long long sum = 1, num0 = 1,num=1;
    rep(i,n){
        sum *= 10;
        sum %= mod;
        num0 *= 9;
        num0 %= mod;
        num *= 8;
        num %= mod;
    }
    long long ans;
    ans = sum - num0;
    if(ans <= 0) ans += mod;
    ans -= num0;
    if(ans <= 0) ans += mod;
    ans += num;
    ans %= mod;
    cout << ans << endl;
}