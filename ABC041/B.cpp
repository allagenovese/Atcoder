#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    long long s = (a*b)%1000000007;
    long long v = (s*c)%1000000007;
    cout << v << endl;
}