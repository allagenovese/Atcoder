#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(min(min(a,b),c),d) << endl;
}