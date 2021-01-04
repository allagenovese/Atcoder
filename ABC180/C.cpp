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
    long long n;
    cin >> n;
    vector<long long> ans_1,ans_2;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            if(i*i == n) ans_1.push_back(i);
            else{
                ans_1.push_back(i);
                ans_2.push_back(n/i);
            }
        }
    }
    for(int i = 0; i < ans_1.size(); i++){
        cout << ans_1[i] << endl;
    }
    sort(ans_2.begin(),ans_2.end());
    for(int i = 0; i < ans_2.size(); i++){
        cout << ans_2[i] << endl;
    }
}