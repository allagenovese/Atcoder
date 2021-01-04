#include <bits/stdc++.h>
using namespace std;
int main() {
   int N;
   cin >> N;
   vector<int64_t> m(10000);
   if(N < 27){
       

   }
   m.at(0) = 26;
   for(int i = 1; i< 3; i++){
       m.at(i) = std::pow(26, i+1) + m.at(i-1);
       cout << m.at(i) << endl;
   }
}