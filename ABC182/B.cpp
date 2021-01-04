#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> ans(2);
  vector<int> a(n);
  int num = 0;
  for(int i = 0; i < n; i++){
    cin >> a.at(i);
    if(a.at(i) > num) num = a.at(i);
  }
  for(int i = 2; i <= 1000; i++){
    int div = 0;
    for(int j = 0; j < n; j++){
      if(a.at(j)  % i == 0) div++;
    }
    if(div > ans[0]){
      ans[0] = div;
      ans[1] = i;
    }
  }
  cout << ans[1] << endl;
}