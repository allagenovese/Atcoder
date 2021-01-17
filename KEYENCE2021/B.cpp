#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n, k, m;
    m = 0;
    cin >> n >> k;
    vector<long long > a(n), num(300001);
    rep(i,n){
        cin >> a[i];
        num.at(a[i])++;
        if(m < a[i]) m = a[i];
    }
    long long ans = 0;
    // k個の部屋に分ける
    while(k > 0 && num.at(0) != 0){
        long long num0;
        for(int i = 0; i <= m;i++){
            if(num.at(i) == 0) break;
            else{
                num0 = i;
                num.at(i)--;
            }
        }
        ans += num0+1;
        k--;
    }
    cout << ans << endl;
}