#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long double sx,sy,gx, gy;
    cin >> sx >> sy >> gx >> gy;
    long double ans = (gy*sx+sy*gx)/(sy+gy);
    cout << std::fixed << std::setprecision(15) << ans << endl;
}