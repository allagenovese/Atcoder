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
    vector<int> x(n);
    long long manhattan = 0;
    long long  u = 0;
    long long chu = 0;
    rep(i,n){
        long long num; 
        cin >> num;
        if(num < 0) num = -1*num;
        manhattan += num;
        u += num*num;
        x.at(i) = num;
    }
    long double uans = sqrt(u);
    sort(x.begin(),x.end());
    cout << manhattan << endl;
    cout << std::fixed << std::setprecision(15) << uans << endl;
    cout << x.at(n-1) << endl;
}