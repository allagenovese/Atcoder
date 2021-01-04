#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
#define ll long long
using namespace std;
int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { // n が 0 になるまで
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
bool func(int i, int x, const vector<int> &a,vector<vector<int>> &dp ){
  // base case
  if( i == 0){
    if(x == 0) return tr~ue;
    else return false;
  }
  if( x < 0) return false;
  if(func(i-1, x, a)) return true;
  
  if(func(i-1,x-a[i-1],a)) return true;

  return false;

}
int main(){
 pp  int n; cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a.at(i);
  int x; cin >> x;
  if(func(n, x, a)) cout << "Yes" << endl;
  else cout << "No" << endl;
}