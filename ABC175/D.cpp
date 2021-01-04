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
  int m;
  vector<int> s(n);
  int num;
  vector<int> ans;
  rep(i,n){
    cin >> m;
    if(i < 2){
      for(int j = 1; j <= n; j++){
        if(s.at(n-j) < m ){
          ans.insert(ans.begin(),num);
          s.insert(s.end()-j+1,m);
          s.erase(s.begin());
          break;
        }
      }
    }
    else if (a.at(a.size()-1) < m ){
      ans.insert(ans.begin(),1);
      s.push_back(m);
      s.erase(s.begin());
    }
    else{
      int num = n - i/2;
      while(true){
        if(s.at(num) == m ){
          while(true){
            num--;
            if(s.at(num) < m ){
              ans.insert(ans.begin(),num);
              s.insert(s.end()-num+1,m);
              s.erase(s.begin());
            }
          }
        }
        if(s.at(num-1) < num && m <= s.at(num)){
          ans.insert(ans.begin(),num);
              s.insert(s.end()-num+1,m);
              s.erase(s.begin());
        }
        else if(s.at(num) < m ){

        }
      }
    }
  }
  for(int i = ans.size()-1; i >= 0; i--) cout << ans.at(i) << endl;
}