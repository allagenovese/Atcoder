#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
  long long n;
  cin >> n;
  long long ans = 0;
  long long m = n/2;
  for(long long c = 1; c <= m; c++ ){
    long long num = 0;
    long long sub = n - c;
    long long l = max(sub,c);
    for(long long b = 1; b*b <= l; b++ ){
      if(sub % b == 0){
        ans++;
        if(sub / b != b ) ans++;
      }
      if(c % b == 0){
        ans++;
        if(c / b != b) ans++;
      }
    } 
  }
  cout << ans << endl;
}