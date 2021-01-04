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
    int h, w, k;
    cin >> h >> w >> k;
    int counter = 0;
    vector<vector<char>> c(h+1,vector<char>(w+1));
    vector<vector<char>> cx(w+1,vector<char>(h+1));
    rep(i,h){
        rep(j,w){
            cin >> c.at(i).at(j);
            cx.at(j).at(i) = c.at(i).at(j);
            if(c.at(i).at(j) == '#') counter++;
        }
    }
    
}