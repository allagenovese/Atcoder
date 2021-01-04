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
    string s = "Now I need a drink, alcoholic of course, after the heavy lectures involving quantum mechanics.";
    int num = 0;
    vector<int> ans;
    rep(i,s.size()){
        if(s.at(i) == ' '){
            ans.push_back(num);
            num = 0;
        }
        else if(s.at(i) == ',' || s.at(i) == '.') continue;
        else if(s.at(i) != ' ') num++;
    }
    rep(i,ans.size()) cout << ans.at(i);
}