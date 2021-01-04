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
  for(int i = 1; i <= 100; i++){
    if(i % 3 == 0 && i % 5 != 0 ) cout << "Fizz" << endl;
    else if(i % 5 == 0 && i % 3 != 0) cout << "Buzz" << endl;
    else if(i % 3 == 0 && i % 3 == 0) cout << "FizzBuzz" << endl;
    else cout << i << endl;
  }
}