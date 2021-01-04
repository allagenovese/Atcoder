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
  string s, t;
  cin >> s >> t;
  int max = 0;
  for(int i = 0; i < s.size()-t.size()+1; i++){
    int ans = 0;
    for(int j = 0; j< t.size(); j++) {
      if(s.at(i+j) == t.at(j))ans++;
    }
    if(max <= ans){
      max = ans; 
    }
  }
  cout << t.size()-max << endl;
}