#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long a,c;
    double b;
    cin >> a >> b;
    b += 0.0001;
    c = b*100;
    long long ans = (a*c)/100;
    cout << ans << endl;
}