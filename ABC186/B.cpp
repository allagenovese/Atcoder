#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int> (w));
    long long max_array = 101;
    rep(i,h){
        rep(j,w){
            cin >> a[i][j];
            if(a[i][j] < max_array ) max_array = a[i][j];
        }
    }
    long long ans = 0;
    rep(i,h){
        rep(j,w){
            if(max_array < a[i][j] ) ans += a[i][j]-max_array;
        }
    }
    cout << ans << endl;
}