#include <bits/stdc++.h>
const double PI = acos(-1);
#include<fstream>
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
  vector<vector<int>> vec(5,vector<int>(5));
  rep(i,5) rep(j,5) vec.at(i).at(j) = i+j;
  ofstream ofs("test2.csv");
  rep(i,3){
     rep(j,5){
       ofs << vec.at(i).at(j) << ",";
     }
     ofs << endl;
  }
  for(int i =3; i < 5; i++){
    for(int j = 0; j< 5; j++){
      ofs << vec.at(i).at(j) << ",";
    }
    ofs << endl;
  }
}