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
  string s;
  s = "Hi He Lied Because Boron Could Not Oxidize Fluorine. New Nations Might Also Sign Peace Security Clause. Arthur King Can.";
  map<int,string> m;
  string t;
  int num = 1;
  for(int i = 0; i < s.size(); i++){
    if(s.at(i) == '.') continue;
    else if(s.at(i) == ' '){
      if(num == 1|| num == 5 num == 6 || num == 7 num == 8|| num == 9 num == 15|| num == 16 || num== 19){
        m.insert(pair(num,s.at(i+1)))
      }
    }
  }
}