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
    int ac = 0;
    int wa = 0;
    int tle = 0;
    int re = 0;
    rep(i,n){
        string s;
        cin >> s;
        if(s == "AC") ac++;
        else if( s == "WA") wa++;
        else if(s == "TLE") tle++;
        else if(s == "RE") re++;
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;

}