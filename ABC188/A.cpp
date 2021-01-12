#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long x, y;
    cin >> x >> y;
    if(abs(x-y) < 3) cout << "Yes" << endl;
    else cout << "No" << endl;
}