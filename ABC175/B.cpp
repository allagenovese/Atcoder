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
    vector<long long> l(n);
    rep(i,n) cin >> l.at(i);
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k <n; k++){
                if(l.at(i) != l.at(j) && l.at(j) != l.at(k) && l.at(k) != l.at(i)){
                   int len = l.at(i) + l.at(j) + l.at(k);
                   int ma = max(l.at(i),max(l.at(j),l.at(k)));
                   int rest = len - ma;
                    if(ma < rest){
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}