#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
  long long n,q;
  cin >> n >> q;
  vector<string> name(n);
  vector<long long> time(n);
  queue<long long> qu;
  for(int i = 0; i < n; i++){
    cin >> name[i] >> time[i];
    qu.push(time[i]);
  }
  long long m = n;
  long long sum = 0;
  long long num = 0;
  while(!qu.empty()){
    if(qu.front() <= q){
      sum += qu.front();
      qu.pop();
      num++;
      cout << name.at((num % m) -1) << " " 
      << sum <<endl;
    }
    else{
      sum += q;
      qu.push(qu.front()-q);
      num++;
      qu.pop();
    }
  }
}